#!/bin/bash

set -e -u

sed -i 's/#\(en_US\.UTF-8\)/\1/' /etc/locale.gen
locale-gen

ln -sf /usr/share/zoneinfo/UTC /etc/localtime

usermod -s /usr/bin/bash root
cp -aT /etc/skel/ /root/
chmod 700 /root
passwd root

useradd -mg users -G wheel,power,storage -s /bin/bash liveuser
chown -R liveuser:wheel /home/liveuser
passwd liveuser

sed -i 's/#\(PermitRootLogin \).\+/\1yes/' /etc/ssh/sshd_config
sed -i "s/#Server/Server/g" /etc/pacman.d/mirrorlist
sed -i 's/#\(Storage=\)auto/\1volatile/' /etc/systemd/journald.conf
sed --in-place 's/^#\s*\(%wheel\s\+ALL=(ALL)\s\+ALL\)/\1/' /etc/sudoers

sed -i 's/#\(HandleSuspendKey=\)suspend/\1ignore/' /etc/systemd/logind.conf
sed -i 's/#\(HandleHibernateKey=\)hibernate/\1ignore/' /etc/systemd/logind.conf
sed -i 's/#\(HandleLidSwitch=\)suspend/\1ignore/' /etc/systemd/logind.conf

pacman-key --init
pacman-key --populate archlinux
mv /mirrorlist /etc/pacman.d/
pacman -Sy
pacman -U --noconfirm /pythonqt-3.2-6-x86_64.pkg.tar.xz
pacman -U --noconfirm /plymouth-git-0.9.4.r72.g24a7ee5-1-x86_64.pkg.tar.xz

systemctl enable pacman-init.service choose-mirror.service sddm-plymouth.service NetworkManager.service
systemctl set-default graphical.target


mv /oblogout.conf /etc/
mv /grub /etc/default/
mv /mkinitcpio.conf /etc/

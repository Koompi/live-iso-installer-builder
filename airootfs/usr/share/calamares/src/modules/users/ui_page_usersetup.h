/********************************************************************************
** Form generated from reading UI file 'page_usersetup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_USERSETUP_H
#define UI_PAGE_USERSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_UserSetup
{
public:
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer;
    QLabel *labelWhatIsYourName;
    QHBoxLayout *horizontalLayout;
    QLineEdit *textBoxFullName;
    QLabel *labelFullName;
    QLabel *labelFullNameError;
    QSpacerItem *verticalSpacer_2;
    QLabel *username_label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *textBoxUsername;
    QLabel *labelUsername;
    QLabel *labelUsernameError;
    QLabel *username_extra_label_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *hostname_label_2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *textBoxHostname;
    QLabel *labelHostname;
    QLabel *labelHostnameError;
    QLabel *hostname_extra_label_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *password_label_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *textBoxUserPassword;
    QLineEdit *textBoxUserVerifiedPassword;
    QLabel *labelUserPassword;
    QLabel *labelUserPasswordError;
    QLabel *password_extra_label_3;
    QCheckBox *checkBoxAutoLogin;
    QCheckBox *checkBoxReusePassword;
    QSpacerItem *verticalSpacer_6;
    QLabel *labelChooseRootPassword;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *textBoxRootPassword;
    QLineEdit *textBoxVerifiedRootPassword;
    QLabel *labelRootPassword;
    QLabel *labelRootPasswordError;
    QLabel *labelExtraRootPassword;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QWidget *Page_UserSetup)
    {
        if (Page_UserSetup->objectName().isEmpty())
            Page_UserSetup->setObjectName(QString::fromUtf8("Page_UserSetup"));
        Page_UserSetup->resize(862, 683);
        verticalLayout_12 = new QVBoxLayout(Page_UserSetup);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalSpacer = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer);

        labelWhatIsYourName = new QLabel(Page_UserSetup);
        labelWhatIsYourName->setObjectName(QString::fromUtf8("labelWhatIsYourName"));

        verticalLayout_12->addWidget(labelWhatIsYourName);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBoxFullName = new QLineEdit(Page_UserSetup);
        textBoxFullName->setObjectName(QString::fromUtf8("textBoxFullName"));
        textBoxFullName->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(textBoxFullName);

        labelFullName = new QLabel(Page_UserSetup);
        labelFullName->setObjectName(QString::fromUtf8("labelFullName"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelFullName->sizePolicy().hasHeightForWidth());
        labelFullName->setSizePolicy(sizePolicy);
        labelFullName->setMinimumSize(QSize(24, 24));
        labelFullName->setMaximumSize(QSize(24, 24));
        labelFullName->setText(QString::fromUtf8(""));
        labelFullName->setScaledContents(true);

        horizontalLayout->addWidget(labelFullName);

        labelFullNameError = new QLabel(Page_UserSetup);
        labelFullNameError->setObjectName(QString::fromUtf8("labelFullNameError"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelFullNameError->sizePolicy().hasHeightForWidth());
        labelFullNameError->setSizePolicy(sizePolicy1);
        labelFullNameError->setWordWrap(true);

        horizontalLayout->addWidget(labelFullNameError);


        verticalLayout_12->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_2);

        username_label_2 = new QLabel(Page_UserSetup);
        username_label_2->setObjectName(QString::fromUtf8("username_label_2"));
        username_label_2->setWordWrap(false);

        verticalLayout_12->addWidget(username_label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textBoxUsername = new QLineEdit(Page_UserSetup);
        textBoxUsername->setObjectName(QString::fromUtf8("textBoxUsername"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBoxUsername->sizePolicy().hasHeightForWidth());
        textBoxUsername->setSizePolicy(sizePolicy2);
        textBoxUsername->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(textBoxUsername);

        labelUsername = new QLabel(Page_UserSetup);
        labelUsername->setObjectName(QString::fromUtf8("labelUsername"));
        sizePolicy.setHeightForWidth(labelUsername->sizePolicy().hasHeightForWidth());
        labelUsername->setSizePolicy(sizePolicy);
        labelUsername->setMinimumSize(QSize(24, 24));
        labelUsername->setMaximumSize(QSize(24, 24));
        labelUsername->setScaledContents(true);

        horizontalLayout_2->addWidget(labelUsername);

        labelUsernameError = new QLabel(Page_UserSetup);
        labelUsernameError->setObjectName(QString::fromUtf8("labelUsernameError"));
        sizePolicy1.setHeightForWidth(labelUsernameError->sizePolicy().hasHeightForWidth());
        labelUsernameError->setSizePolicy(sizePolicy1);
        labelUsernameError->setMinimumSize(QSize(200, 0));
        labelUsernameError->setAlignment(Qt::AlignVCenter);
        labelUsernameError->setWordWrap(true);

        horizontalLayout_2->addWidget(labelUsernameError);


        verticalLayout_12->addLayout(horizontalLayout_2);

        username_extra_label_2 = new QLabel(Page_UserSetup);
        username_extra_label_2->setObjectName(QString::fromUtf8("username_extra_label_2"));
        username_extra_label_2->setStyleSheet(QString::fromUtf8("font-weight: normal"));
        username_extra_label_2->setWordWrap(true);

        verticalLayout_12->addWidget(username_extra_label_2);

        verticalSpacer_4 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_4);

        hostname_label_2 = new QLabel(Page_UserSetup);
        hostname_label_2->setObjectName(QString::fromUtf8("hostname_label_2"));
        hostname_label_2->setWordWrap(false);

        verticalLayout_12->addWidget(hostname_label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        textBoxHostname = new QLineEdit(Page_UserSetup);
        textBoxHostname->setObjectName(QString::fromUtf8("textBoxHostname"));
        sizePolicy2.setHeightForWidth(textBoxHostname->sizePolicy().hasHeightForWidth());
        textBoxHostname->setSizePolicy(sizePolicy2);
        textBoxHostname->setMinimumSize(QSize(200, 0));

        horizontalLayout_4->addWidget(textBoxHostname);

        labelHostname = new QLabel(Page_UserSetup);
        labelHostname->setObjectName(QString::fromUtf8("labelHostname"));
        sizePolicy.setHeightForWidth(labelHostname->sizePolicy().hasHeightForWidth());
        labelHostname->setSizePolicy(sizePolicy);
        labelHostname->setMinimumSize(QSize(24, 24));
        labelHostname->setMaximumSize(QSize(24, 24));
        labelHostname->setScaledContents(true);

        horizontalLayout_4->addWidget(labelHostname);

        labelHostnameError = new QLabel(Page_UserSetup);
        labelHostnameError->setObjectName(QString::fromUtf8("labelHostnameError"));
        sizePolicy1.setHeightForWidth(labelHostnameError->sizePolicy().hasHeightForWidth());
        labelHostnameError->setSizePolicy(sizePolicy1);
        labelHostnameError->setMinimumSize(QSize(200, 0));
        labelHostnameError->setAlignment(Qt::AlignVCenter);
        labelHostnameError->setWordWrap(true);

        horizontalLayout_4->addWidget(labelHostnameError);


        verticalLayout_12->addLayout(horizontalLayout_4);

        hostname_extra_label_2 = new QLabel(Page_UserSetup);
        hostname_extra_label_2->setObjectName(QString::fromUtf8("hostname_extra_label_2"));
        hostname_extra_label_2->setWordWrap(false);

        verticalLayout_12->addWidget(hostname_extra_label_2);

        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_3);

        password_label_2 = new QLabel(Page_UserSetup);
        password_label_2->setObjectName(QString::fromUtf8("password_label_2"));
        password_label_2->setWordWrap(false);

        verticalLayout_12->addWidget(password_label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        textBoxUserPassword = new QLineEdit(Page_UserSetup);
        textBoxUserPassword->setObjectName(QString::fromUtf8("textBoxUserPassword"));
        sizePolicy2.setHeightForWidth(textBoxUserPassword->sizePolicy().hasHeightForWidth());
        textBoxUserPassword->setSizePolicy(sizePolicy2);
        textBoxUserPassword->setMinimumSize(QSize(200, 0));
        textBoxUserPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(textBoxUserPassword);

        textBoxUserVerifiedPassword = new QLineEdit(Page_UserSetup);
        textBoxUserVerifiedPassword->setObjectName(QString::fromUtf8("textBoxUserVerifiedPassword"));
        sizePolicy2.setHeightForWidth(textBoxUserVerifiedPassword->sizePolicy().hasHeightForWidth());
        textBoxUserVerifiedPassword->setSizePolicy(sizePolicy2);
        textBoxUserVerifiedPassword->setMinimumSize(QSize(200, 0));
        textBoxUserVerifiedPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(textBoxUserVerifiedPassword);

        labelUserPassword = new QLabel(Page_UserSetup);
        labelUserPassword->setObjectName(QString::fromUtf8("labelUserPassword"));
        sizePolicy.setHeightForWidth(labelUserPassword->sizePolicy().hasHeightForWidth());
        labelUserPassword->setSizePolicy(sizePolicy);
        labelUserPassword->setMinimumSize(QSize(24, 24));
        labelUserPassword->setMaximumSize(QSize(24, 24));
        labelUserPassword->setScaledContents(true);

        horizontalLayout_3->addWidget(labelUserPassword);

        labelUserPasswordError = new QLabel(Page_UserSetup);
        labelUserPasswordError->setObjectName(QString::fromUtf8("labelUserPasswordError"));
        sizePolicy1.setHeightForWidth(labelUserPasswordError->sizePolicy().hasHeightForWidth());
        labelUserPasswordError->setSizePolicy(sizePolicy1);
        labelUserPasswordError->setMinimumSize(QSize(100, 0));
        labelUserPasswordError->setAlignment(Qt::AlignVCenter);
        labelUserPasswordError->setWordWrap(true);

        horizontalLayout_3->addWidget(labelUserPasswordError);


        verticalLayout_12->addLayout(horizontalLayout_3);

        password_extra_label_3 = new QLabel(Page_UserSetup);
        password_extra_label_3->setObjectName(QString::fromUtf8("password_extra_label_3"));
        password_extra_label_3->setWordWrap(true);

        verticalLayout_12->addWidget(password_extra_label_3);

        checkBoxAutoLogin = new QCheckBox(Page_UserSetup);
        checkBoxAutoLogin->setObjectName(QString::fromUtf8("checkBoxAutoLogin"));

        verticalLayout_12->addWidget(checkBoxAutoLogin);

        checkBoxReusePassword = new QCheckBox(Page_UserSetup);
        checkBoxReusePassword->setObjectName(QString::fromUtf8("checkBoxReusePassword"));

        verticalLayout_12->addWidget(checkBoxReusePassword);

        verticalSpacer_6 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_6);

        labelChooseRootPassword = new QLabel(Page_UserSetup);
        labelChooseRootPassword->setObjectName(QString::fromUtf8("labelChooseRootPassword"));
        labelChooseRootPassword->setWordWrap(false);

        verticalLayout_12->addWidget(labelChooseRootPassword);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        textBoxRootPassword = new QLineEdit(Page_UserSetup);
        textBoxRootPassword->setObjectName(QString::fromUtf8("textBoxRootPassword"));
        sizePolicy2.setHeightForWidth(textBoxRootPassword->sizePolicy().hasHeightForWidth());
        textBoxRootPassword->setSizePolicy(sizePolicy2);
        textBoxRootPassword->setMinimumSize(QSize(200, 0));
        textBoxRootPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(textBoxRootPassword);

        textBoxVerifiedRootPassword = new QLineEdit(Page_UserSetup);
        textBoxVerifiedRootPassword->setObjectName(QString::fromUtf8("textBoxVerifiedRootPassword"));
        sizePolicy2.setHeightForWidth(textBoxVerifiedRootPassword->sizePolicy().hasHeightForWidth());
        textBoxVerifiedRootPassword->setSizePolicy(sizePolicy2);
        textBoxVerifiedRootPassword->setMinimumSize(QSize(200, 0));
        textBoxVerifiedRootPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(textBoxVerifiedRootPassword);

        labelRootPassword = new QLabel(Page_UserSetup);
        labelRootPassword->setObjectName(QString::fromUtf8("labelRootPassword"));
        sizePolicy.setHeightForWidth(labelRootPassword->sizePolicy().hasHeightForWidth());
        labelRootPassword->setSizePolicy(sizePolicy);
        labelRootPassword->setMinimumSize(QSize(24, 24));
        labelRootPassword->setMaximumSize(QSize(24, 24));
        labelRootPassword->setScaledContents(true);

        horizontalLayout_5->addWidget(labelRootPassword);

        labelRootPasswordError = new QLabel(Page_UserSetup);
        labelRootPasswordError->setObjectName(QString::fromUtf8("labelRootPasswordError"));
        sizePolicy1.setHeightForWidth(labelRootPasswordError->sizePolicy().hasHeightForWidth());
        labelRootPasswordError->setSizePolicy(sizePolicy1);
        labelRootPasswordError->setMinimumSize(QSize(100, 0));
        labelRootPasswordError->setAlignment(Qt::AlignVCenter);
        labelRootPasswordError->setWordWrap(true);

        horizontalLayout_5->addWidget(labelRootPasswordError);


        verticalLayout_12->addLayout(horizontalLayout_5);

        labelExtraRootPassword = new QLabel(Page_UserSetup);
        labelExtraRootPassword->setObjectName(QString::fromUtf8("labelExtraRootPassword"));
        labelExtraRootPassword->setWordWrap(true);

        verticalLayout_12->addWidget(labelExtraRootPassword);

        verticalSpacer_7 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_7);


        retranslateUi(Page_UserSetup);

        QMetaObject::connectSlotsByName(Page_UserSetup);
    } // setupUi

    void retranslateUi(QWidget *Page_UserSetup)
    {
        Page_UserSetup->setWindowTitle(QApplication::translate("Page_UserSetup", "Form", nullptr));
        labelWhatIsYourName->setText(QApplication::translate("Page_UserSetup", "What is your name?", nullptr));
        labelFullNameError->setText(QString());
        username_label_2->setText(QApplication::translate("Page_UserSetup", "What name do you want to use to log in?", nullptr));
        labelUsernameError->setText(QString());
        username_extra_label_2->setText(QApplication::translate("Page_UserSetup", "<small>If more than one person will use this computer, you can set up multiple accounts after installation.</small>", nullptr));
        hostname_label_2->setText(QApplication::translate("Page_UserSetup", "What is the name of this computer?", nullptr));
        labelHostnameError->setText(QString());
        hostname_extra_label_2->setStyleSheet(QApplication::translate("Page_UserSetup", "font-weight: normal", nullptr));
        hostname_extra_label_2->setText(QApplication::translate("Page_UserSetup", "<small>This name will be used if you make the computer visible to others on a network.</small>", nullptr));
        password_label_2->setText(QApplication::translate("Page_UserSetup", "Choose a password to keep your account safe.", nullptr));
        labelUserPasswordError->setText(QString());
        password_extra_label_3->setStyleSheet(QApplication::translate("Page_UserSetup", "font-weight: normal", nullptr));
        password_extra_label_3->setText(QApplication::translate("Page_UserSetup", "<small>Enter the same password twice, so that it can be checked for typing errors. A good password will contain a mixture of letters, numbers and punctuation, should be at least eight characters long, and should be changed at regular intervals.</small>", nullptr));
        checkBoxAutoLogin->setText(QApplication::translate("Page_UserSetup", "Log in automatically without asking for the password.", nullptr));
        checkBoxReusePassword->setText(QApplication::translate("Page_UserSetup", "Use the same password for the administrator account.", nullptr));
        labelChooseRootPassword->setText(QApplication::translate("Page_UserSetup", "Choose a password for the administrator account.", nullptr));
        labelRootPasswordError->setText(QString());
        labelExtraRootPassword->setStyleSheet(QApplication::translate("Page_UserSetup", "font-weight: normal", nullptr));
        labelExtraRootPassword->setText(QApplication::translate("Page_UserSetup", "<small>Enter the same password twice, so that it can be checked for typing errors.</small>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_UserSetup: public Ui_Page_UserSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_USERSETUP_H

/********************************************************************************
** Form generated from reading UI file 'KeyboardPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARDPAGE_H
#define UI_KEYBOARDPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_Keyboard
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *KBPreviewLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBoxModel;
    QPushButton *buttonRestore;
    QHBoxLayout *horizontalLayout_3;
    QListView *listLayout;
    QListWidget *listVariant;
    QLineEdit *LE_TestKeyboard;

    void setupUi(QWidget *Page_Keyboard)
    {
        if (Page_Keyboard->objectName().isEmpty())
            Page_Keyboard->setObjectName(QString::fromUtf8("Page_Keyboard"));
        Page_Keyboard->resize(830, 573);
        verticalLayout = new QVBoxLayout(Page_Keyboard);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 12, -1, 12);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        KBPreviewLayout = new QVBoxLayout();
        KBPreviewLayout->setObjectName(QString::fromUtf8("KBPreviewLayout"));

        horizontalLayout->addLayout(KBPreviewLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(Page_Keyboard);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        comboBoxModel = new QComboBox(Page_Keyboard);
        comboBoxModel->setObjectName(QString::fromUtf8("comboBoxModel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxModel->sizePolicy().hasHeightForWidth());
        comboBoxModel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(comboBoxModel);

        buttonRestore = new QPushButton(Page_Keyboard);
        buttonRestore->setObjectName(QString::fromUtf8("buttonRestore"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/restore.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonRestore->setIcon(icon);
        buttonRestore->setIconSize(QSize(18, 18));

        horizontalLayout_2->addWidget(buttonRestore);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(9);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        listLayout = new QListView(Page_Keyboard);
        listLayout->setObjectName(QString::fromUtf8("listLayout"));

        horizontalLayout_3->addWidget(listLayout);

        listVariant = new QListWidget(Page_Keyboard);
        listVariant->setObjectName(QString::fromUtf8("listVariant"));

        horizontalLayout_3->addWidget(listVariant);


        verticalLayout->addLayout(horizontalLayout_3);

        LE_TestKeyboard = new QLineEdit(Page_Keyboard);
        LE_TestKeyboard->setObjectName(QString::fromUtf8("LE_TestKeyboard"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        LE_TestKeyboard->setFont(font);

        verticalLayout->addWidget(LE_TestKeyboard);

        QWidget::setTabOrder(comboBoxModel, listLayout);
        QWidget::setTabOrder(listLayout, listVariant);
        QWidget::setTabOrder(listVariant, LE_TestKeyboard);
        QWidget::setTabOrder(LE_TestKeyboard, buttonRestore);

        retranslateUi(Page_Keyboard);

        QMetaObject::connectSlotsByName(Page_Keyboard);
    } // setupUi

    void retranslateUi(QWidget *Page_Keyboard)
    {
        Page_Keyboard->setWindowTitle(QApplication::translate("Page_Keyboard", "Form", nullptr));
        label->setText(QApplication::translate("Page_Keyboard", "Keyboard Model:", nullptr));
        buttonRestore->setText(QString());
        LE_TestKeyboard->setInputMask(QString());
        LE_TestKeyboard->setText(QString());
        LE_TestKeyboard->setPlaceholderText(QApplication::translate("Page_Keyboard", "Type here to test your keyboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_Keyboard: public Ui_Page_Keyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARDPAGE_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_4;
    QLineEdit *nomPage_4;
    QLineEdit *prenomPage_4;
    QLineEdit *agePage_4;
    QLabel *label;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *boutonPage_4;
    QPushButton *boutonRetourPage_4;
    QWidget *page_5;
    QLineEdit *nomPage_5;
    QLineEdit *prenomPage_5;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *boutonPage_5;
    QPushButton *boutonRetourPage_5;
    QWidget *page_3;
    QListWidget *listWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *boutonAjoutPage_3;
    QPushButton *boutonRetirerPage_3;
    QPushButton *boutonModifierPage_3;
    QPushButton *boutonSauvegardePage_3;
    QWidget *page_6;
    QLineEdit *nomPage_6;
    QLineEdit *prenomPage_6;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *boutonPage_6;
    QPushButton *boutonRetourPage_6;
    QWidget *page_7;
    QWidget *formLayoutWidget;
    QFormLayout *formLayoutPage_7;
    QLabel *nomPage_7;
    QLabel *prenomPage_7;
    QLabel *niveauPage_7;
    QLabel *agePage_7;
    QLabel *mentionPage_7;
    QLineEdit *nomValeurPage_7;
    QLineEdit *prenomValeurPage_7;
    QLineEdit *ageValeurPage_7;
    QLineEdit *niveauValeurPage_7;
    QLineEdit *mentionValeurPage_7;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *boutonPage_7;
    QPushButton *boutonRetourPage_7;
    QWidget *page_8;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayoutPage_8;
    QLabel *nomPage_8;
    QLabel *prenomPage_8;
    QLabel *agePage_8;
    QLabel *niveauPage_8;
    QLabel *mentionPage_8;
    QLabel *nomValeurPage_8;
    QLabel *prenomValeurPage_8;
    QLabel *ageValeurPage_8;
    QLabel *niveauValeurPage_8;
    QLabel *mentionValeurPage_8;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *boutonPage_8;
    QPushButton *boutonRetourPage_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1358, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(310, -20, 911, 601));
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        nomPage_4 = new QLineEdit(page_4);
        nomPage_4->setObjectName("nomPage_4");
        nomPage_4->setGeometry(QRect(180, 120, 401, 51));
        prenomPage_4 = new QLineEdit(page_4);
        prenomPage_4->setObjectName("prenomPage_4");
        prenomPage_4->setGeometry(QRect(180, 200, 401, 51));
        agePage_4 = new QLineEdit(page_4);
        agePage_4->setObjectName("agePage_4");
        agePage_4->setGeometry(QRect(180, 280, 401, 51));
        label = new QLabel(page_4);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 60, 201, 31));
        horizontalLayoutWidget_2 = new QWidget(page_4);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(180, 350, 401, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        boutonPage_4 = new QPushButton(horizontalLayoutWidget_2);
        boutonPage_4->setObjectName("boutonPage_4");

        horizontalLayout_3->addWidget(boutonPage_4);

        boutonRetourPage_4 = new QPushButton(horizontalLayoutWidget_2);
        boutonRetourPage_4->setObjectName("boutonRetourPage_4");

        horizontalLayout_3->addWidget(boutonRetourPage_4);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        nomPage_5 = new QLineEdit(page_5);
        nomPage_5->setObjectName("nomPage_5");
        nomPage_5->setGeometry(QRect(180, 140, 401, 51));
        prenomPage_5 = new QLineEdit(page_5);
        prenomPage_5->setObjectName("prenomPage_5");
        prenomPage_5->setGeometry(QRect(180, 220, 401, 51));
        label_2 = new QLabel(page_5);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(290, 70, 201, 31));
        horizontalLayoutWidget_3 = new QWidget(page_5);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(180, 290, 401, 80));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        boutonPage_5 = new QPushButton(horizontalLayoutWidget_3);
        boutonPage_5->setObjectName("boutonPage_5");

        horizontalLayout_4->addWidget(boutonPage_5);

        boutonRetourPage_5 = new QPushButton(horizontalLayoutWidget_3);
        boutonRetourPage_5->setObjectName("boutonRetourPage_5");

        horizontalLayout_4->addWidget(boutonRetourPage_5);

        stackedWidget->addWidget(page_5);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        listWidget = new QListWidget(page_3);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 110, 761, 441));
        horizontalLayoutWidget = new QWidget(page_3);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 20, 761, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        boutonAjoutPage_3 = new QPushButton(horizontalLayoutWidget);
        boutonAjoutPage_3->setObjectName("boutonAjoutPage_3");

        horizontalLayout->addWidget(boutonAjoutPage_3);

        boutonRetirerPage_3 = new QPushButton(horizontalLayoutWidget);
        boutonRetirerPage_3->setObjectName("boutonRetirerPage_3");

        horizontalLayout->addWidget(boutonRetirerPage_3);

        boutonModifierPage_3 = new QPushButton(horizontalLayoutWidget);
        boutonModifierPage_3->setObjectName("boutonModifierPage_3");

        horizontalLayout->addWidget(boutonModifierPage_3);

        boutonSauvegardePage_3 = new QPushButton(horizontalLayoutWidget);
        boutonSauvegardePage_3->setObjectName("boutonSauvegardePage_3");

        horizontalLayout->addWidget(boutonSauvegardePage_3);

        stackedWidget->addWidget(page_3);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        nomPage_6 = new QLineEdit(page_6);
        nomPage_6->setObjectName("nomPage_6");
        nomPage_6->setGeometry(QRect(200, 130, 401, 51));
        prenomPage_6 = new QLineEdit(page_6);
        prenomPage_6->setObjectName("prenomPage_6");
        prenomPage_6->setGeometry(QRect(200, 230, 401, 51));
        label_3 = new QLabel(page_6);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(320, 70, 201, 31));
        horizontalLayoutWidget_4 = new QWidget(page_6);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(200, 290, 401, 80));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        boutonPage_6 = new QPushButton(horizontalLayoutWidget_4);
        boutonPage_6->setObjectName("boutonPage_6");

        horizontalLayout_5->addWidget(boutonPage_6);

        boutonRetourPage_6 = new QPushButton(horizontalLayoutWidget_4);
        boutonRetourPage_6->setObjectName("boutonRetourPage_6");

        horizontalLayout_5->addWidget(boutonRetourPage_6);

        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        formLayoutWidget = new QWidget(page_7);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(200, 40, 351, 381));
        formLayoutPage_7 = new QFormLayout(formLayoutWidget);
        formLayoutPage_7->setObjectName("formLayoutPage_7");
        formLayoutPage_7->setHorizontalSpacing(10);
        formLayoutPage_7->setVerticalSpacing(50);
        formLayoutPage_7->setContentsMargins(0, 0, 0, 0);
        nomPage_7 = new QLabel(formLayoutWidget);
        nomPage_7->setObjectName("nomPage_7");
        QFont font;
        font.setPointSize(14);
        nomPage_7->setFont(font);

        formLayoutPage_7->setWidget(0, QFormLayout::ItemRole::LabelRole, nomPage_7);

        prenomPage_7 = new QLabel(formLayoutWidget);
        prenomPage_7->setObjectName("prenomPage_7");
        prenomPage_7->setFont(font);

        formLayoutPage_7->setWidget(1, QFormLayout::ItemRole::LabelRole, prenomPage_7);

        niveauPage_7 = new QLabel(formLayoutWidget);
        niveauPage_7->setObjectName("niveauPage_7");
        niveauPage_7->setFont(font);

        formLayoutPage_7->setWidget(3, QFormLayout::ItemRole::LabelRole, niveauPage_7);

        agePage_7 = new QLabel(formLayoutWidget);
        agePage_7->setObjectName("agePage_7");
        agePage_7->setFont(font);

        formLayoutPage_7->setWidget(2, QFormLayout::ItemRole::LabelRole, agePage_7);

        mentionPage_7 = new QLabel(formLayoutWidget);
        mentionPage_7->setObjectName("mentionPage_7");
        mentionPage_7->setFont(font);

        formLayoutPage_7->setWidget(4, QFormLayout::ItemRole::LabelRole, mentionPage_7);

        nomValeurPage_7 = new QLineEdit(formLayoutWidget);
        nomValeurPage_7->setObjectName("nomValeurPage_7");

        formLayoutPage_7->setWidget(0, QFormLayout::ItemRole::FieldRole, nomValeurPage_7);

        prenomValeurPage_7 = new QLineEdit(formLayoutWidget);
        prenomValeurPage_7->setObjectName("prenomValeurPage_7");

        formLayoutPage_7->setWidget(1, QFormLayout::ItemRole::FieldRole, prenomValeurPage_7);

        ageValeurPage_7 = new QLineEdit(formLayoutWidget);
        ageValeurPage_7->setObjectName("ageValeurPage_7");

        formLayoutPage_7->setWidget(2, QFormLayout::ItemRole::FieldRole, ageValeurPage_7);

        niveauValeurPage_7 = new QLineEdit(formLayoutWidget);
        niveauValeurPage_7->setObjectName("niveauValeurPage_7");

        formLayoutPage_7->setWidget(3, QFormLayout::ItemRole::FieldRole, niveauValeurPage_7);

        mentionValeurPage_7 = new QLineEdit(formLayoutWidget);
        mentionValeurPage_7->setObjectName("mentionValeurPage_7");

        formLayoutPage_7->setWidget(4, QFormLayout::ItemRole::FieldRole, mentionValeurPage_7);

        horizontalLayoutWidget_5 = new QWidget(page_7);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(200, 430, 351, 80));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_6->setSpacing(20);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        boutonPage_7 = new QPushButton(horizontalLayoutWidget_5);
        boutonPage_7->setObjectName("boutonPage_7");

        horizontalLayout_6->addWidget(boutonPage_7);

        boutonRetourPage_7 = new QPushButton(horizontalLayoutWidget_5);
        boutonRetourPage_7->setObjectName("boutonRetourPage_7");

        horizontalLayout_6->addWidget(boutonRetourPage_7);

        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        formLayoutWidget_2 = new QWidget(page_8);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(300, 30, 351, 391));
        formLayoutPage_8 = new QFormLayout(formLayoutWidget_2);
        formLayoutPage_8->setObjectName("formLayoutPage_8");
        formLayoutPage_8->setHorizontalSpacing(10);
        formLayoutPage_8->setVerticalSpacing(50);
        formLayoutPage_8->setContentsMargins(0, 0, 0, 0);
        nomPage_8 = new QLabel(formLayoutWidget_2);
        nomPage_8->setObjectName("nomPage_8");
        nomPage_8->setFont(font);

        formLayoutPage_8->setWidget(0, QFormLayout::ItemRole::LabelRole, nomPage_8);

        prenomPage_8 = new QLabel(formLayoutWidget_2);
        prenomPage_8->setObjectName("prenomPage_8");
        prenomPage_8->setFont(font);

        formLayoutPage_8->setWidget(1, QFormLayout::ItemRole::LabelRole, prenomPage_8);

        agePage_8 = new QLabel(formLayoutWidget_2);
        agePage_8->setObjectName("agePage_8");
        agePage_8->setFont(font);

        formLayoutPage_8->setWidget(2, QFormLayout::ItemRole::LabelRole, agePage_8);

        niveauPage_8 = new QLabel(formLayoutWidget_2);
        niveauPage_8->setObjectName("niveauPage_8");
        niveauPage_8->setFont(font);

        formLayoutPage_8->setWidget(3, QFormLayout::ItemRole::LabelRole, niveauPage_8);

        mentionPage_8 = new QLabel(formLayoutWidget_2);
        mentionPage_8->setObjectName("mentionPage_8");
        mentionPage_8->setFont(font);

        formLayoutPage_8->setWidget(4, QFormLayout::ItemRole::LabelRole, mentionPage_8);

        nomValeurPage_8 = new QLabel(formLayoutWidget_2);
        nomValeurPage_8->setObjectName("nomValeurPage_8");
        nomValeurPage_8->setFont(font);

        formLayoutPage_8->setWidget(0, QFormLayout::ItemRole::FieldRole, nomValeurPage_8);

        prenomValeurPage_8 = new QLabel(formLayoutWidget_2);
        prenomValeurPage_8->setObjectName("prenomValeurPage_8");
        prenomValeurPage_8->setFont(font);

        formLayoutPage_8->setWidget(1, QFormLayout::ItemRole::FieldRole, prenomValeurPage_8);

        ageValeurPage_8 = new QLabel(formLayoutWidget_2);
        ageValeurPage_8->setObjectName("ageValeurPage_8");
        ageValeurPage_8->setFont(font);

        formLayoutPage_8->setWidget(2, QFormLayout::ItemRole::FieldRole, ageValeurPage_8);

        niveauValeurPage_8 = new QLabel(formLayoutWidget_2);
        niveauValeurPage_8->setObjectName("niveauValeurPage_8");
        niveauValeurPage_8->setFont(font);

        formLayoutPage_8->setWidget(3, QFormLayout::ItemRole::FieldRole, niveauValeurPage_8);

        mentionValeurPage_8 = new QLabel(formLayoutWidget_2);
        mentionValeurPage_8->setObjectName("mentionValeurPage_8");
        mentionValeurPage_8->setFont(font);

        formLayoutPage_8->setWidget(4, QFormLayout::ItemRole::FieldRole, mentionValeurPage_8);

        horizontalLayoutWidget_6 = new QWidget(page_8);
        horizontalLayoutWidget_6->setObjectName("horizontalLayoutWidget_6");
        horizontalLayoutWidget_6->setGeometry(QRect(300, 430, 351, 80));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_7->setSpacing(20);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        boutonPage_8 = new QPushButton(horizontalLayoutWidget_6);
        boutonPage_8->setObjectName("boutonPage_8");

        horizontalLayout_7->addWidget(boutonPage_8);

        boutonRetourPage_8 = new QPushButton(horizontalLayoutWidget_6);
        boutonRetourPage_8->setObjectName("boutonRetourPage_8");

        horizontalLayout_7->addWidget(boutonRetourPage_8);

        stackedWidget->addWidget(page_8);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1358, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        nomPage_4->setPlaceholderText(QCoreApplication::translate("MainWindow", " Nom", nullptr));
        prenomPage_4->setPlaceholderText(QCoreApplication::translate("MainWindow", " Prenom", nullptr));
        agePage_4->setPlaceholderText(QCoreApplication::translate("MainWindow", " Age", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "AJOUTER UNE PERSONNE", nullptr));
        boutonPage_4->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        boutonRetourPage_4->setText(QCoreApplication::translate("MainWindow", "Retour", nullptr));
        nomPage_5->setPlaceholderText(QCoreApplication::translate("MainWindow", " Nom", nullptr));
        prenomPage_5->setPlaceholderText(QCoreApplication::translate("MainWindow", " Prenom", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "RETIRER UNE PERSONNE", nullptr));
        boutonPage_5->setText(QCoreApplication::translate("MainWindow", "Chercher", nullptr));
        boutonRetourPage_5->setText(QCoreApplication::translate("MainWindow", "Retour", nullptr));
        boutonAjoutPage_3->setText(QCoreApplication::translate("MainWindow", "Ajouter une Personne", nullptr));
        boutonRetirerPage_3->setText(QCoreApplication::translate("MainWindow", "Retirer une Personne", nullptr));
        boutonModifierPage_3->setText(QCoreApplication::translate("MainWindow", "Modifier une Personne", nullptr));
        boutonSauvegardePage_3->setText(QCoreApplication::translate("MainWindow", "Sauvegarder", nullptr));
        nomPage_6->setPlaceholderText(QCoreApplication::translate("MainWindow", " Nom", nullptr));
        prenomPage_6->setPlaceholderText(QCoreApplication::translate("MainWindow", " Prenom", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "MODIFIER UNE PERSONNE", nullptr));
        boutonPage_6->setText(QCoreApplication::translate("MainWindow", "Chercher", nullptr));
        boutonRetourPage_6->setText(QCoreApplication::translate("MainWindow", "Retour", nullptr));
        nomPage_7->setText(QCoreApplication::translate("MainWindow", "NOM        :", nullptr));
        prenomPage_7->setText(QCoreApplication::translate("MainWindow", "PRENOM  :", nullptr));
        niveauPage_7->setText(QCoreApplication::translate("MainWindow", "NIVEAU     :", nullptr));
        agePage_7->setText(QCoreApplication::translate("MainWindow", "AGE           :", nullptr));
        mentionPage_7->setText(QCoreApplication::translate("MainWindow", "MENTION :", nullptr));
        boutonPage_7->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        boutonRetourPage_7->setText(QCoreApplication::translate("MainWindow", "Retour", nullptr));
        nomPage_8->setText(QCoreApplication::translate("MainWindow", "NOM        :", nullptr));
        prenomPage_8->setText(QCoreApplication::translate("MainWindow", "PRENOM  :", nullptr));
        agePage_8->setText(QCoreApplication::translate("MainWindow", "AGE           :", nullptr));
        niveauPage_8->setText(QCoreApplication::translate("MainWindow", "NIVEAU     :", nullptr));
        mentionPage_8->setText(QCoreApplication::translate("MainWindow", "MENTION :", nullptr));
        nomValeurPage_8->setText(QString());
        prenomValeurPage_8->setText(QString());
        ageValeurPage_8->setText(QString());
        niveauValeurPage_8->setText(QString());
        mentionValeurPage_8->setText(QString());
        boutonPage_8->setText(QCoreApplication::translate("MainWindow", "Desabonner", nullptr));
        boutonRetourPage_8->setText(QCoreApplication::translate("MainWindow", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

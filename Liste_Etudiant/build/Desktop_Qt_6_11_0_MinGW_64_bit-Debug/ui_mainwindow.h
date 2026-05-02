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
    QLineEdit *nom;
    QLineEdit *prenom;
    QPushButton *pushButton;
    QLineEdit *age;
    QLabel *label;
    QWidget *page_5;
    QLineEdit *nom_2;
    QLineEdit *prenom_3;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QWidget *page_3;
    QPushButton *ajoutPersonne;
    QPushButton *supprimePersonne;
    QListWidget *listWidget;
    QPushButton *supprimePersonne_2;
    QWidget *page_6;
    QLineEdit *nom_3;
    QLineEdit *prenom_4;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QWidget *page_7;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *label_13;
    QLineEdit *nomModifier;
    QLineEdit *prenomModifier;
    QLineEdit *ageModifier;
    QLineEdit *niveauModifier;
    QLineEdit *mentionModifier;
    QPushButton *modifierBoutton;
    QWidget *page_8;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *nomPage8;
    QLabel *prenomPage8;
    QLabel *agePage8;
    QLabel *niveauPage8;
    QLabel *mentionPage8;
    QLabel *nomValeurPage8;
    QLabel *prenomValeurPage8;
    QLabel *ageValeurPage8;
    QLabel *niveauValeurPage8;
    QLabel *mentionValeurPage8;
    QPushButton *modifierBoutton_2;
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
        nom = new QLineEdit(page_4);
        nom->setObjectName("nom");
        nom->setGeometry(QRect(180, 120, 401, 51));
        prenom = new QLineEdit(page_4);
        prenom->setObjectName("prenom");
        prenom->setGeometry(QRect(180, 200, 401, 51));
        pushButton = new QPushButton(page_4);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 360, 111, 41));
        age = new QLineEdit(page_4);
        age->setObjectName("age");
        age->setGeometry(QRect(180, 280, 401, 51));
        label = new QLabel(page_4);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 60, 201, 31));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        nom_2 = new QLineEdit(page_5);
        nom_2->setObjectName("nom_2");
        nom_2->setGeometry(QRect(180, 140, 401, 51));
        prenom_3 = new QLineEdit(page_5);
        prenom_3->setObjectName("prenom_3");
        prenom_3->setGeometry(QRect(180, 220, 401, 51));
        pushButton_2 = new QPushButton(page_5);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(320, 300, 111, 41));
        label_2 = new QLabel(page_5);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(290, 70, 201, 31));
        stackedWidget->addWidget(page_5);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        ajoutPersonne = new QPushButton(page_3);
        ajoutPersonne->setObjectName("ajoutPersonne");
        ajoutPersonne->setGeometry(QRect(20, 30, 191, 51));
        supprimePersonne = new QPushButton(page_3);
        supprimePersonne->setObjectName("supprimePersonne");
        supprimePersonne->setGeometry(QRect(300, 30, 191, 51));
        listWidget = new QListWidget(page_3);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 110, 761, 441));
        supprimePersonne_2 = new QPushButton(page_3);
        supprimePersonne_2->setObjectName("supprimePersonne_2");
        supprimePersonne_2->setGeometry(QRect(580, 30, 191, 51));
        stackedWidget->addWidget(page_3);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        nom_3 = new QLineEdit(page_6);
        nom_3->setObjectName("nom_3");
        nom_3->setGeometry(QRect(200, 130, 401, 51));
        prenom_4 = new QLineEdit(page_6);
        prenom_4->setObjectName("prenom_4");
        prenom_4->setGeometry(QRect(200, 230, 401, 51));
        label_3 = new QLabel(page_6);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(320, 70, 201, 31));
        pushButton_3 = new QPushButton(page_6);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(340, 320, 111, 41));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        formLayoutWidget = new QWidget(page_7);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(200, 40, 351, 381));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(50);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        QFont font;
        font.setPointSize(14);
        label_4->setFont(font);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_5);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_11);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_7);

        label_13 = new QLabel(formLayoutWidget);
        label_13->setObjectName("label_13");
        label_13->setFont(font);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_13);

        nomModifier = new QLineEdit(formLayoutWidget);
        nomModifier->setObjectName("nomModifier");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, nomModifier);

        prenomModifier = new QLineEdit(formLayoutWidget);
        prenomModifier->setObjectName("prenomModifier");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, prenomModifier);

        ageModifier = new QLineEdit(formLayoutWidget);
        ageModifier->setObjectName("ageModifier");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, ageModifier);

        niveauModifier = new QLineEdit(formLayoutWidget);
        niveauModifier->setObjectName("niveauModifier");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, niveauModifier);

        mentionModifier = new QLineEdit(formLayoutWidget);
        mentionModifier->setObjectName("mentionModifier");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, mentionModifier);

        modifierBoutton = new QPushButton(page_7);
        modifierBoutton->setObjectName("modifierBoutton");
        modifierBoutton->setGeometry(QRect(340, 440, 111, 41));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        formLayoutWidget_2 = new QWidget(page_8);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(300, 30, 351, 391));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setHorizontalSpacing(10);
        formLayout_2->setVerticalSpacing(50);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        nomPage8 = new QLabel(formLayoutWidget_2);
        nomPage8->setObjectName("nomPage8");
        nomPage8->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, nomPage8);

        prenomPage8 = new QLabel(formLayoutWidget_2);
        prenomPage8->setObjectName("prenomPage8");
        prenomPage8->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, prenomPage8);

        agePage8 = new QLabel(formLayoutWidget_2);
        agePage8->setObjectName("agePage8");
        agePage8->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, agePage8);

        niveauPage8 = new QLabel(formLayoutWidget_2);
        niveauPage8->setObjectName("niveauPage8");
        niveauPage8->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::ItemRole::LabelRole, niveauPage8);

        mentionPage8 = new QLabel(formLayoutWidget_2);
        mentionPage8->setObjectName("mentionPage8");
        mentionPage8->setFont(font);

        formLayout_2->setWidget(4, QFormLayout::ItemRole::LabelRole, mentionPage8);

        nomValeurPage8 = new QLabel(formLayoutWidget_2);
        nomValeurPage8->setObjectName("nomValeurPage8");
        nomValeurPage8->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, nomValeurPage8);

        prenomValeurPage8 = new QLabel(formLayoutWidget_2);
        prenomValeurPage8->setObjectName("prenomValeurPage8");
        prenomValeurPage8->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, prenomValeurPage8);

        ageValeurPage8 = new QLabel(formLayoutWidget_2);
        ageValeurPage8->setObjectName("ageValeurPage8");
        ageValeurPage8->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, ageValeurPage8);

        niveauValeurPage8 = new QLabel(formLayoutWidget_2);
        niveauValeurPage8->setObjectName("niveauValeurPage8");
        niveauValeurPage8->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::ItemRole::FieldRole, niveauValeurPage8);

        mentionValeurPage8 = new QLabel(formLayoutWidget_2);
        mentionValeurPage8->setObjectName("mentionValeurPage8");
        mentionValeurPage8->setFont(font);

        formLayout_2->setWidget(4, QFormLayout::ItemRole::FieldRole, mentionValeurPage8);

        modifierBoutton_2 = new QPushButton(page_8);
        modifierBoutton_2->setObjectName("modifierBoutton_2");
        modifierBoutton_2->setGeometry(QRect(420, 450, 111, 41));
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

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        nom->setPlaceholderText(QCoreApplication::translate("MainWindow", " Nom", nullptr));
        prenom->setPlaceholderText(QCoreApplication::translate("MainWindow", " Prenom", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        age->setPlaceholderText(QCoreApplication::translate("MainWindow", " Age", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "AJOUTER UNE PERSONNE", nullptr));
        nom_2->setPlaceholderText(QCoreApplication::translate("MainWindow", " Nom", nullptr));
        prenom_3->setPlaceholderText(QCoreApplication::translate("MainWindow", " Prenom", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Chercher", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "RETIRER UNE PERSONNE", nullptr));
        ajoutPersonne->setText(QCoreApplication::translate("MainWindow", "Ajouter une Personne", nullptr));
        supprimePersonne->setText(QCoreApplication::translate("MainWindow", "Retirer une Personne", nullptr));
        supprimePersonne_2->setText(QCoreApplication::translate("MainWindow", "Modifier une Personne", nullptr));
        nom_3->setPlaceholderText(QCoreApplication::translate("MainWindow", " Nom", nullptr));
        prenom_4->setPlaceholderText(QCoreApplication::translate("MainWindow", " Prenom", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "MODIFIER UNE PERSONNE", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Chercher", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "NOM        :", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "PRENOM  :", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "NIVEAU     :", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "AGE           :", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "MENTION :", nullptr));
        modifierBoutton->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        nomPage8->setText(QCoreApplication::translate("MainWindow", "NOM        :", nullptr));
        prenomPage8->setText(QCoreApplication::translate("MainWindow", "PRENOM  :", nullptr));
        agePage8->setText(QCoreApplication::translate("MainWindow", "AGE           :", nullptr));
        niveauPage8->setText(QCoreApplication::translate("MainWindow", "NIVEAU     :", nullptr));
        mentionPage8->setText(QCoreApplication::translate("MainWindow", "MENTION :", nullptr));
        nomValeurPage8->setText(QString());
        prenomValeurPage8->setText(QString());
        ageValeurPage8->setText(QString());
        niveauValeurPage8->setText(QString());
        mentionValeurPage8->setText(QString());
        modifierBoutton_2->setText(QCoreApplication::translate("MainWindow", "Desabonner", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

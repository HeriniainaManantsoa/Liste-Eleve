#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "personne.h"
#include <vector>
#include <QMessageBox>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->page_3);
    ui->listWidget->show();
    listePersonne.setSaveFile("saveFile.txt");
    listePersonne.restoreList(ui->listWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_boutonAjoutPage_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_4);
}

void MainWindow::on_boutonRetirerPage_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_5);
}

void MainWindow::on_boutonModifierPage_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_6);
}

void MainWindow::on_boutonSauvegardePage_3_clicked()
{
    listePersonne.saveList();
}

void MainWindow::on_boutonPage_4_clicked()
{
    if (ui->nomPage_4->text() != "" && ui->prenomPage_4->text() != "") {
        Personne p;
        p.setNom(ui->nomPage_4->text().toStdString());
        p.setPrenomList(ui->prenomPage_4->text().toStdString());
        p.setAge(ui->agePage_4->text().toDouble());
        listePersonne.inscrire(ui->listWidget,p);
        ui->nomPage_4->clear();
        ui->prenomPage_4->clear();
        ui->agePage_4->clear();
        ui->stackedWidget->setCurrentWidget(ui->page_3);
    }
    else
        QMessageBox::information(this,"Remarque","Chaque case doit être rempli");
}


void MainWindow::on_boutonPage_5_clicked()
{
    Personne p;
    p.setNom(ui->nomPage_5->text().toStdString());
    p.setPrenomList(ui->prenomPage_5->text().toStdString());
    vector<Personne>::iterator it = listePersonne.findPersonne(p);
    if (it != listePersonne.getListEnd()) {
        ui->nomValeurPage_8->setText(ui->nomPage_5->text());
        ui->prenomValeurPage_8->setText(ui->prenomPage_5->text());
        ui->stackedWidget->setCurrentWidget(ui->page_8);
    }
    else
        QMessageBox::warning(this,"Erreur","Cette Personne n'existe Pas!!");
}


void MainWindow::on_boutonPage_6_clicked()
{
    Personne p;
    p.setNom(ui->nomPage_6->text().toStdString());
    p.setPrenomList(ui->prenomPage_6->text().toStdString());
    vector<Personne>::iterator it = listePersonne.findPersonne(p);
    if (it != listePersonne.getListEnd()) {
        ui->nomValeurPage_7->setText(QString::fromStdString(p.getNom()));
        ui->prenomValeurPage_7->setText(QString::fromStdString(p.getFullPrenom()));
        ui->stackedWidget->setCurrentWidget(ui->page_7);
    }
    else
        QMessageBox::warning(this,"Erreur","Cette Personne n'existe Pas!!");
}

void MainWindow::on_boutonPage_7_clicked()
{
    if (ui->nomValeurPage_7->text() != "" && ui->prenomValeurPage_7->text() != "") {
        Personne p;
        p.setNom(ui->nomPage_6->text().toStdString());
        p.setPrenomList(ui->prenomPage_6->text().toStdString());
        listePersonne.desabonner(ui->listWidget,p);

        p.setNom(ui->nomValeurPage_7->text().toStdString());
        p.setPrenomList(ui->prenomValeurPage_7->text().toStdString());
        listePersonne.inscrire(ui->listWidget,p);
        ui->nomValeurPage_7->clear();
        ui->prenomValeurPage_7->clear();
        ui->nomPage_6->clear();
        ui->prenomPage_6->clear();
        ui->stackedWidget->setCurrentWidget(ui->page_3);
    }
    else
        QMessageBox::information(this,"Remarque","Chaque case doit être rempli");
}


void MainWindow::on_boutonPage_8_clicked()
{
    Personne p;
    p.setNom(ui->nomValeurPage_8->text().toStdString());
    p.setPrenomList(ui->prenomValeurPage_8->text().toStdString());
    listePersonne.desabonner(ui->listWidget,p);
    ui->nomValeurPage_8->clear();
    ui->prenomValeurPage_8->clear();
    ui->nomPage_5->clear();
    ui->prenomPage_5->clear();
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}

void MainWindow::on_boutonRetourPage_4_clicked()
{
    ui->nomPage_4->clear();
    ui->prenomPage_4->clear();
    ui->agePage_4->clear();
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}


void MainWindow::on_boutonRetourPage_5_clicked()
{
    ui->nomPage_5->clear();
    ui->prenomPage_5->clear();
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}


void MainWindow::on_boutonRetourPage_6_clicked()
{
    ui->nomPage_6->clear();
    ui->prenomPage_6->clear();
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}


void MainWindow::on_boutonRetourPage_7_clicked()
{
    ui->nomValeurPage_7->clear();
    ui->prenomValeurPage_7->clear();
    ui->ageValeurPage_7->clear();
    ui->niveauValeurPage_7->clear();
    ui->mentionValeurPage_7->clear();
    ui->stackedWidget->setCurrentWidget(ui->page_6);
}


void MainWindow::on_boutonRetourPage_8_clicked()
{
    ui->nomValeurPage_8->clear();
    ui->prenomValeurPage_8->clear();
    ui->ageValeurPage_8->clear();
    ui->niveauValeurPage_8->clear();
    ui->mentionValeurPage_8->clear();
    ui->stackedWidget->setCurrentWidget(ui->page_5);
}


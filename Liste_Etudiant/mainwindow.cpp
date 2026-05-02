#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "personne.h"
#include <vector>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->page_3);
    ui->listWidget->show();
    listePersonne.Initialise(ui->listWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ajoutPersonne_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_4);
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->nom->text() != "" && ui->prenom->text() != "") {
        Personne p;
        p.setNom(ui->nom->text().toStdString());
        p.setPrenom(ui->prenom->text().toStdString());
        p.setAge(ui->age->text().toDouble());
        listePersonne.inscrire(ui->listWidget,p);
        ui->nom->clear();
        ui->prenom->clear();
        ui->age->clear();
    }
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}


void MainWindow::on_supprimePersonne_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_5);
}


void MainWindow::on_pushButton_2_clicked()
{
    Personne p;
    p.setNom(ui->nom_2->text().toStdString());
    p.setPrenom(ui->prenom_3->text().toStdString());
    vector<Personne>::iterator it = listePersonne.findPersonne(p);
    if (it != listePersonne.getListEnd()) {
        ui->nomValeurPage8->setText(ui->nom_2->text());
        ui->prenomValeurPage8->setText(ui->prenom_3->text());
    }

    ui->nom_2->clear();
    ui->prenom_3->clear();
    ui->stackedWidget->setCurrentWidget(ui->page_8);
}

void MainWindow::on_modifierBoutton_2_clicked()
{
    Personne p;
    p.setNom(ui->nomValeurPage8->text().toStdString());
    p.setPrenom(ui->prenomValeurPage8->text().toStdString());
    listePersonne.desabonner(ui->listWidget,p);
    ui->nomValeurPage8->clear();
    ui->prenomValeurPage8->clear();
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}

void MainWindow::on_supprimePersonne_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_6);
}

void MainWindow::on_pushButton_3_clicked()
{
    Personne p;
    p.setNom(ui->nom_3->text().toStdString());
    p.setPrenom(ui->prenom_4->text().toStdString());
    vector<Personne>::iterator it = listePersonne.findPersonne(p);
    if (it != listePersonne.getListEnd()) {
        ui->nomModifier->setText(QString::fromStdString(p.getNom()));
        ui->prenomModifier->setText(QString::fromStdString(p.getPrenom()));
        listePersonne.desabonner(ui->listWidget,p);
        ui->stackedWidget->setCurrentWidget(ui->page_7);
    }
}

void MainWindow::on_modifierBoutton_clicked()
{
    if (ui->nomModifier->text() != "" && ui->prenomModifier->text() != "") {
        Personne p;
        p.setNom(ui->nomModifier->text().toStdString());
        p.setPrenom(ui->prenomModifier->text().toStdString());
        listePersonne.inscrire(ui->listWidget,p);
        ui->nomModifier->clear();
        ui->prenomModifier->clear();
    }
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}


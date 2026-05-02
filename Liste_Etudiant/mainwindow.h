#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "inscription.h"
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_ajoutPersonne_clicked();

    void on_pushButton_clicked();

    void on_supprimePersonne_clicked();

    void on_pushButton_2_clicked();

    void on_supprimePersonne_2_clicked();

    void on_pushButton_3_clicked();

    void on_modifierBoutton_clicked();

    void on_modifierBoutton_2_clicked();

private:
    Ui::MainWindow *ui;
    Inscription listePersonne;
};
#endif // MAINWINDOW_H

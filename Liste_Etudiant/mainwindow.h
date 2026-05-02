#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "inscription.h"

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
    void on_boutonAjoutPage_3_clicked();

    void on_boutonRetirerPage_3_clicked();

    void on_boutonModifierPage_3_clicked();

    void on_boutonPage_4_clicked();

    void on_boutonPage_5_clicked();

    void on_boutonPage_6_clicked();

    void on_boutonPage_7_clicked();

    void on_boutonPage_8_clicked();

    void on_boutonSauvegardePage_3_clicked();

private:
    Ui::MainWindow *ui;
    Inscription listePersonne;
};
#endif // MAINWINDOW_H

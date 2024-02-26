#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void timeout();

private slots:
    void on_startGame_clicked();
    void on_stopGame_clicked();
    void on_aika120_clicked();
    void on_aika5_clicked();
    void on_swich1_clicked();
    void on_swich2_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *pQTimer;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    void updateProgressBar();
    void setGameInfoText(QString);
};
#endif // MAINWINDOW_H

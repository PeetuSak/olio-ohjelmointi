#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer();

    ui->progressBar1->setRange(0,100);
    ui->progressBar1->setValue(100);
    ui->progressBar2->setRange(0, 100);
    ui->progressBar2->setValue(100);
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}

void MainWindow::on_startGame_clicked()
{

    pQTimer->start(1000);

    currentPlayer = 1;
    setGameInfoText("Game ongoing");
    updateProgressBar();
}

void MainWindow::on_stopGame_clicked()
{
    pQTimer->stop();
    player1Time = 0;
    player2Time = 0;
    setGameInfoText("New Game via Start Button");
    updateProgressBar();
}

void MainWindow::on_aika120_clicked()
{
    setGameInfoText("Ready to Play");
    gameTime = 120;
}

void MainWindow::on_aika5_clicked()
{
    setGameInfoText("Ready to Play");
    gameTime = 300;

}

void MainWindow::on_swich1_clicked()
{
    currentPlayer = 2;
}

void MainWindow::on_swich2_clicked()
{
    currentPlayer = 1;
}

void MainWindow::updateProgressBar()
{


    int remainingTime1 = gameTime - player1Time;
    int remainingTime2 = gameTime - player2Time;

    int bar1 = remainingTime1 * 100 / gameTime;
    int bar2 = remainingTime2 * 100 / gameTime;

    ui ->progressBar1->setValue(bar1);
    ui ->progressBar2->setValue(bar2);


}

void MainWindow::setGameInfoText(QString u)
{
    ui->label->setText(u);
}

void MainWindow::timeout()
{
    if(currentPlayer == 1){
        player1Time++;
        if(player1Time >= gameTime){
            pQTimer ->stop();
            setGameInfoText("player 2 won");
        }
    }
    else{
        player2Time++;
        if(player1Time >= gameTime){
            pQTimer ->stop();
            setGameInfoText("player 1 won");
        }
    }
    updateProgressBar();
}

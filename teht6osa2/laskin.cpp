#include "laskin.h"
#include "ui_laskin.h"
#include <QPushButton>

laskin::laskin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::laskin)
{
    ui->setupUi(this);
    operand = -1;
}

laskin::~laskin()
{
    delete ui;
}

void laskin::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->text();


    if (operand == -1) {
        number1 += name;
        ui->num1->setText(number1);
    } else {
        number2 += name;
        ui->num2->setText(number2);
    }
}


void laskin::ClearAndEnterClickHandler()
{
    float n1 = number1.toFloat();
    float n2 = number2.toFloat();

    if(operand != -1){
    switch(operand) {
    case 0:
        result = n1 + n2;
        break;
    case 1:
        result = n1 - n2;
        break;
    case 2:
        result = n1 * n2;
        break;
    case 3:
        result = n1 / n2;
        break;
    }
    ui->result->setText(QString::number(result));
    }
    operand = -1;

}

void laskin::addSubMulDivClickHandler(int op)
{
    operand = op;
}

void laskin::resetLineEdits()
{
    number1.clear();
    number2.clear();
    ui->num1->setText("");
    ui->num2->setText("");
    ui->result->setText("");

}


void laskin::on_N1_clicked()
{
   numberClickedHandler();
}


void laskin::on_N2_clicked()
{
    numberClickedHandler();
}

void laskin::on_N3_clicked()
{
    numberClickedHandler();
}

void laskin::on_N4_clicked()
{
    numberClickedHandler();
}

void laskin::on_N5_clicked()
{
    numberClickedHandler();
}

void laskin::on_N6_clicked()
{
    numberClickedHandler();
}

void laskin::on_N7_clicked()
{
    numberClickedHandler();
}

void laskin::on_N8_clicked()
{
    numberClickedHandler();
}

void laskin::on_N9_clicked()
{
    numberClickedHandler();
}

void laskin::on_N0_clicked()
{
    numberClickedHandler();
}

void laskin::on_add_clicked()
{
    addSubMulDivClickHandler(0);
}

void laskin::on_sub_clicked()
{
    addSubMulDivClickHandler(1);
}

void laskin::on_mul_clicked()
{
    addSubMulDivClickHandler(2);
}

void laskin::on_div_clicked()
{
    addSubMulDivClickHandler(3);
}

void laskin::on_Clear_clicked()
{
    resetLineEdits();
}

void laskin::on_enter_clicked()
{
    ClearAndEnterClickHandler();
}



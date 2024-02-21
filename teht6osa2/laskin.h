#ifndef LASKIN_H
#define LASKIN_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class laskin; }
QT_END_NAMESPACE

class laskin : public QMainWindow
{
    Q_OBJECT

public:
    laskin(QWidget *parent = nullptr);
    ~laskin();

private slots:

    void on_N1_clicked();
    void on_N2_clicked();
    void on_N3_clicked();
    void on_N4_clicked();
    void on_N5_clicked();
    void on_N6_clicked();
    void on_N7_clicked();
    void on_N8_clicked();
    void on_N9_clicked();
    void on_N0_clicked();
    void on_add_clicked();
    void on_sub_clicked();
    void on_mul_clicked();
    void on_div_clicked();
    void on_Clear_clicked();
    void on_enter_clicked();

private:

    Ui::laskin *ui;
    QString number1, number2;
    int state;
    float result;
    short operand;

    void numberClickedHandler();
    void ClearAndEnterClickHandler();
    void addSubMulDivClickHandler(int op);
    void resetLineEdits();
};
#endif // LASKIN_H

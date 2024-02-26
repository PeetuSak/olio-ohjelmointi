
#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void countButton_clicked();
    void resetButton_clicked();

private:
    Ui::MainWindow *ui;
    QLineEdit *lineEdit;
    QPushButton *countButton;
    QPushButton *resetButton;
};



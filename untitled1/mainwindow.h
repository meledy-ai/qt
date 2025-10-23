#pragma once
#include <QMainWindow>
#include <QShortcut>   // 新增

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void keyPressEvent(QKeyEvent *ev) override;

private slots:
    /* 基础功能 */
    void onNumClicked();
    void onDecimalClicked();
    void onSignClicked();
    void onOperatorClicked();
    void onEqualClicked();
    void onClearClicked();
    void onBackspaceClicked();

    /* 单目运算 */
    void onInverseClicked();   // 1/x
    void onSquareClicked();    // x²
    void onSqrtClicked();      // √x

private:
    Ui::MainWindow *ui;
    double  acc = 0;
    QString pendingOp;
    bool    waitOperand = true;
    void calculate();

    /* 快捷键对象 */
    QShortcut *scInverse = nullptr;
    QShortcut *scSquare  = nullptr;
    QShortcut *scSqrt    = nullptr;
};

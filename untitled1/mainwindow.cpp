#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QPushButton>
#include <QtMath>
#include <QShortcut>   // 快捷方式

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(360, 460);
    setWindowTitle("QtCalc");

    /* 数字 0-9 */
    for (int i = 0; i < 10; ++i) {
        auto btn = findChild<QPushButton*>(QString("num%1").arg(i));
        if (btn) connect(btn, &QPushButton::clicked, this, &MainWindow::onNumClicked);
    }

    /* 基础按钮 */
    connect(ui->period,  &QPushButton::clicked, this, &MainWindow::onDecimalClicked);
    connect(ui->sign,    &QPushButton::clicked, this, &MainWindow::onSignClicked);
    connect(ui->plus,    &QPushButton::clicked, this, &MainWindow::onOperatorClicked);
    connect(ui->minus,   &QPushButton::clicked, this, &MainWindow::onOperatorClicked);
    connect(ui->multiple,&QPushButton::clicked, this, &MainWindow::onOperatorClicked);
    connect(ui->divide,  &QPushButton::clicked, this, &MainWindow::onOperatorClicked);
    connect(ui->equal,   &QPushButton::clicked, this, &MainWindow::onEqualClicked);
    connect(ui->clear,   &QPushButton::clicked, this, &MainWindow::onClearClicked);
    connect(ui->btndelate,&QPushButton::clicked,this,&MainWindow::onBackspaceClicked);

    /* 单目运算 */
    connect(ui->inverse, &QPushButton::clicked, this, &MainWindow::onInverseClicked);
    connect(ui->square,  &QPushButton::clicked, this, &MainWindow::onSquareClicked);
    connect(ui->sqrt,    &QPushButton::clicked, this, &MainWindow::onSqrtClicked);

    /* 注册快捷键，避开 Key_2 冲突 */
    scInverse = new QShortcut(QKeySequence("Ctrl+I"), this);
    scSquare  = new QShortcut(QKeySequence("Ctrl+2"), this);
    scSqrt    = new QShortcut(QKeySequence("Ctrl+R"), this);

    connect(scInverse, &QShortcut::activated, this, &MainWindow::onInverseClicked);
    connect(scSquare,  &QShortcut::activated, this, &MainWindow::onSquareClicked);
    connect(scSqrt,    &QShortcut::activated, this, &MainWindow::onSqrtClicked);

    onClearClicked();                 // 初始显示 0
}

MainWindow::~MainWindow() { delete ui; }

/*=============== 基础槽 ===============*/
void MainWindow::onNumClicked()
{
    QString dig = qobject_cast<QPushButton*>(sender())->text();
    if (waitOperand) {
        ui->display->clear();
        waitOperand = false;
    }
    ui->display->insert(dig);
}

void MainWindow::onDecimalClicked()
{
    if (waitOperand) {
        ui->display->setText("0");
        waitOperand = false;
    }
    if (!ui->display->text().contains('.'))
        ui->display->insert(".");
}

void MainWindow::onSignClicked()
{
    QString txt = ui->display->text();
    double val = txt.toDouble();
    ui->display->setText(QString::number(-val, 'g', 15));
}

void MainWindow::onOperatorClicked()
{
    calculate();
    pendingOp = qobject_cast<QPushButton*>(sender())->text();
    waitOperand = true;
}

void MainWindow::onEqualClicked()
{
    calculate();
    pendingOp.clear();
}

void MainWindow::onClearClicked()
{
    acc = 0;
    pendingOp.clear();
    ui->display->setText("0");
    waitOperand = true;
}

void MainWindow::onBackspaceClicked()
{
    QString txt = ui->display->text();
    txt.chop(1);
    if (txt.isEmpty() || txt == "-") txt = "0";
    ui->display->setText(txt);
}

/*=============== 双目运算 ===============*/
void MainWindow::calculate()
{
    double operand = ui->display->text().toDouble();
    if      (pendingOp == "+") acc += operand;
    else if (pendingOp == "-") acc -= operand;
    else if (pendingOp == "*") acc *= operand;
    else if (pendingOp == "/") {
        if (qFuzzyCompare(operand, 0.0)) {
            ui->display->setText("Error");
            waitOperand = true;
            return;
        }
        acc /= operand;
    }
    else acc = operand;
    ui->display->setText(QString::number(acc, 'g', 15));
    waitOperand = true;
}

/*=============== 单目运算 ===============*/
void MainWindow::onInverseClicked()
{
    double val = ui->display->text().toDouble();
    if (qFuzzyCompare(val, 0.0)) {
        ui->display->setText("Error");
        waitOperand = true;
        return;
    }
    ui->display->setText(QString::number(1.0 / val, 'g', 15));
    waitOperand = true;
}

void MainWindow::onSquareClicked()
{
    double val = ui->display->text().toDouble();
    ui->display->setText(QString::number(val * val, 'g', 15));
    waitOperand = true;
}

void MainWindow::onSqrtClicked()
{
    double val = ui->display->text().toDouble();
    if (val < 0.0) {
        ui->display->setText("Error");
        waitOperand = true;
        return;
    }
    ui->display->setText(QString::number(qSqrt(val), 'g', 15));
    waitOperand = true;
}

/*=============== 键盘 ===============*/
void MainWindow::keyPressEvent(QKeyEvent *ev)
{
    switch (ev->key()) {
    case Qt::Key_0: findChild<QPushButton*>("num0")->click(); break;
    case Qt::Key_1: findChild<QPushButton*>("num1")->click(); break;
    case Qt::Key_2: findChild<QPushButton*>("num2")->click(); break;   // 仅此一处
    case Qt::Key_3: findChild<QPushButton*>("num3")->click(); break;
    case Qt::Key_4: findChild<QPushButton*>("num4")->click(); break;
    case Qt::Key_5: findChild<QPushButton*>("num5")->click(); break;
    case Qt::Key_6: findChild<QPushButton*>("num6")->click(); break;
    case Qt::Key_7: findChild<QPushButton*>("num7")->click(); break;
    case Qt::Key_8: findChild<QPushButton*>("num8")->click(); break;
    case Qt::Key_9: findChild<QPushButton*>("num9")->click(); break;

    case Qt::Key_Plus:     ui->plus->click(); break;
    case Qt::Key_Minus:    ui->minus->click(); break;
    case Qt::Key_Asterisk: ui->multiple->click(); break;
    case Qt::Key_Slash:    ui->divide->click(); break;
    case Qt::Key_Equal:
    case Qt::Key_Return:   ui->equal->click(); break;
    case Qt::Key_Backspace:ui->btndelate->click(); break;
    case Qt::Key_Escape:   ui->clear->click(); break;
    case Qt::Key_Period:
    case Qt::Key_Comma:    ui->period->click(); break;
    }
}

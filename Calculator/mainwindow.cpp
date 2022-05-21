#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Window2.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Открытие окна, с подсказками
void MainWindow::on_pushButton_clicked()
{
    Window2 window;
    window.setModal(true);
    window.exec();
}
//Показ корней уравнения
void MainWindow::on_pushButton_2_clicked()
{
    QString a1 = ui->A1->text();
    QString b1 = ui->B1->text();
    QString c1 = ui->C1->text();
    QString a2 = ui->A2->text();
    QString b2 = ui->B2->text();
    QString c2 = ui->C2->text();
    QString a3 = ui->A3->text();
    QString b3 = ui->B3->text();
    QString c3 = ui->C3->text();
    QString sum1 = ui->Sum1->text();
    QString sum2 = ui->Sum2->text();
    QString sum3 = ui->Sum3->text();

    if (a1 == "" or a2 == "" or a3 == ""){
        QMessageBox::warning(this, "Warning", QString("Неправильный ввод"));
    }
    else{
    double d_a1 ;
    double d_a2 ;
    double d_a3 ;
    double d_b1 ;
    double d_b2 ;
    double d_b3 ;
    double d_c1 ;
    double d_c2 ;
    double d_c3 ;
    double d_sum1 ;
    double d_sum2 ;
    double d_sum3 ;

    d_a1 = a1.toDouble();
    d_a2 = a2.toDouble();
    d_a3 = a3.toDouble();
    d_b1 = b1.toDouble();
    d_b2 = b2.toDouble();
    d_b3 = b3.toDouble();
    d_c1 = c1.toDouble();
    d_c2 = c2.toDouble();
    d_c3 = c3.toDouble();
    d_sum1 = sum1.toDouble();
    d_sum2 = sum2.toDouble();
    d_sum3 = sum3.toDouble();

    double D=100, D1, D2, D3;
    double x, y, z;

/*------------------------------------------------------------------------------------------------------------------------------------------*/

    D = d_a1 * d_b2 * d_c3 + d_a2 * d_b3 * d_c1 + d_b1 * d_c2 * d_a3 - d_a3 * d_b2 * d_c1 - d_b3 * d_c2 * d_a1 - d_a2 * d_b1 * d_c3;

    D1 = d_sum1 * d_b2 * d_c3 + d_b1 * d_c2 * d_sum3 + d_sum2 * d_b3 * d_c1 - d_c1 * d_b2 * d_sum3 - d_sum2 * d_b1 * d_c3 - d_sum1 * d_b3 * d_c2;

    D2 = d_a1 * d_sum2 * d_c3 + d_sum1 * d_c2 * d_a3 + d_a2 * d_sum3 * d_c1 - d_c1 * d_sum2 * d_a3 - d_a2 * d_sum1 * d_c3 - d_a1 * d_sum3 * d_c2;

    D3 = d_a1 * d_b2 * d_sum3 + d_b1 * d_sum2 * d_a3 + d_a2 * d_b3 * d_sum1 - d_sum1 * d_b2 * d_a3 - d_a2 * d_b1 * d_sum3 - d_a1 * d_b3 * d_sum2;

    x = D1 / D;
    y = D2 / D;
    z = D3 / D;

    if (D == 0){
        QMessageBox::warning(this, "Warning", QString("Уравнение не имеет корней\nили их бесконечное колличество"));
    }
    else{
        QMessageBox::information(this, "Answer", QString("x = %1 or %5/%4\n"
                                                        "y = %2 or %6/%4\n"
                                                        "z = %3 or %7/%4").arg(x).arg(y).arg(z).arg(D).arg(D1).arg(D2).arg(D3));
    }
}
}
//Вывод определителя и всех D на экран
void MainWindow::on_pushButton_3_clicked()
{
    QString a1 = ui->A1->text();
    QString b1 = ui->B1->text();
    QString c1 = ui->C1->text();
    QString a2 = ui->A2->text();
    QString b2 = ui->B2->text();
    QString c2 = ui->C2->text();
    QString a3 = ui->A3->text();
    QString b3 = ui->B3->text();
    QString c3 = ui->C3->text();
    QString sum1 = ui->Sum1->text();
    QString sum2 = ui->Sum2->text();
    QString sum3 = ui->Sum3->text();

    if (a1 == "" or a2 == "" or a3 == ""){
        QMessageBox::warning(this, "Warning", QString("Неправильный ввод"));
    }else{

        double d_a1 ;
        double d_a2 ;
        double d_a3 ;
        double d_b1 ;
        double d_b2 ;
        double d_b3 ;
        double d_c1 ;
        double d_c2 ;
        double d_c3 ;
        double d_sum1 ;
        double d_sum2 ;
        double d_sum3 ;

        double D=100, D1, D2, D3;

        d_a1 = a1.toDouble();
        d_a2 = a2.toDouble();
        d_a3 = a3.toDouble();
        d_b1 = b1.toDouble();
        d_b2 = b2.toDouble();
        d_b3 = b3.toDouble();
        d_c1 = c1.toDouble();
        d_c2 = c2.toDouble();
        d_c3 = c3.toDouble();
        d_sum1 = sum1.toDouble();
        d_sum2 = sum2.toDouble();
        d_sum3 = sum3.toDouble();

        D = d_a1 * d_b2 * d_c3 + d_a2 * d_b3 * d_c1 + d_b1 * d_c2 * d_a3 - d_a3 * d_b2 * d_c1 - d_b3 * d_c2 * d_a1 - d_a2 * d_b1 * d_c3;

        D1 = d_sum1 * d_b2 * d_c3 + d_b1 * d_c2 * d_sum3 + d_sum2 * d_b3 * d_c1 - d_c1 * d_b2 * d_sum3 - d_sum2 * d_b1 * d_c3 - d_sum1 * d_b3 * d_c2;

        D2 = d_a1 * d_sum2 * d_c3 + d_sum1 * d_c2 * d_a3 + d_a2 * d_sum3 * d_c1 - d_c1 * d_sum2 * d_a3 - d_a2 * d_sum1 * d_c3 - d_a1 * d_sum3 * d_c2;

        D3 = d_a1 * d_b2 * d_sum3 + d_b1 * d_sum2 * d_a3 + d_a2 * d_b3 * d_sum1 - d_sum1 * d_b2 * d_a3 - d_a2 * d_b1 * d_sum3 - d_a1 * d_b3 * d_sum2;
        if (D == 0){
            QMessageBox::warning(this, "hekko", QString("Уравнение не имеет корней\nили их бесконечное колличество"));
        }else{

    /*-------------------------------------------------------------*/
    //D

       ui -> Show_A1->setText(QString("%1").arg(d_a1));
       ui -> Show_A2->setText(QString("%1").arg(d_a2));
       ui -> Show_A3->setText(QString("%1").arg(d_a3));
       ui -> Show_B1->setText(QString("%1").arg(d_b1));
       ui -> Show_B2->setText(QString("%1").arg(d_b2));
       ui -> Show_B3->setText(QString("%1").arg(d_b3));
       ui -> Show_C1->setText(QString("%1").arg(d_c1));
       ui -> Show_C2->setText(QString("%1").arg(d_c2));
       ui -> Show_C3->setText(QString("%1").arg(d_c3));
       ui -> Show_D->setText(QString("%1").arg(D));

    /*-------------------------------------------------------------*/
    //D1

       ui -> Show_Sum1_1->setText(QString("%1").arg(d_sum1));
       ui -> Show_Sum2_1->setText(QString("%1").arg(d_sum2));
       ui -> Show_Sum3_1->setText(QString("%1").arg(d_sum3));
       ui -> Show_B1_1->setText(QString("%1").arg(d_b1));
       ui -> Show_B2_1->setText(QString("%1").arg(d_b2));
       ui -> Show_B3_1->setText(QString("%1").arg(d_b3));
       ui -> Show_C1_1->setText(QString("%1").arg(d_c1));
       ui -> Show_C2_1->setText(QString("%1").arg(d_c2));
       ui -> Show_C3_1->setText(QString("%1").arg(d_c3));
       ui -> Show_D1->setText(QString("%1").arg(D1));

    /*-------------------------------------------------------------*/
    //D2
       ui -> Show_A1_2->setText(QString("%1").arg(d_a1));
       ui -> Show_A2_2->setText(QString("%1").arg(d_a2));
       ui -> Show_A3_2->setText(QString("%1").arg(d_a3));
       ui -> Show_Sum1_2->setText(QString("%1").arg(d_sum1));
       ui -> Show_Sum2_2->setText(QString("%1").arg(d_sum2));
       ui -> Show_Sum3_2->setText(QString("%1").arg(d_sum3));
       ui -> Show_C1_2->setText(QString("%1").arg(d_c1));
       ui -> Show_C2_2->setText(QString("%1").arg(d_c2));
       ui -> Show_C3_2->setText(QString("%1").arg(d_c3));
       ui -> Show_D2->setText(QString("%1").arg(D2));

    /*-------------------------------------------------------------*/
    //D3
       ui -> Show_A1_3->setText(QString("%1").arg(d_a1));
       ui -> Show_A2_3->setText(QString("%1").arg(d_a2));
       ui -> Show_A3_3->setText(QString("%1").arg(d_a3));
       ui -> Show_B1_3->setText(QString("%1").arg(d_b1));
       ui -> Show_B2_3->setText(QString("%1").arg(d_b2));
       ui -> Show_B3_3->setText(QString("%1").arg(d_b3));
       ui -> Show_Sum1_3->setText(QString("%1").arg(d_sum1));
       ui -> Show_Sum2_3->setText(QString("%1").arg(d_sum2));
       ui -> Show_Sum3_3->setText(QString("%1").arg(d_sum3));
       ui -> Show_D3->setText(QString("%1").arg(D3));


    /*-------------------------------------------------------------*/

        }
    }


}

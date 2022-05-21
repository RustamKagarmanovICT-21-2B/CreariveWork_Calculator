/********************************************************************************
** Form generated from reading UI file 'window2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW2_H
#define UI_WINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Window2
{
public:
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *Window2)
    {
        if (Window2->objectName().isEmpty())
            Window2->setObjectName(QString::fromUtf8("Window2"));
        Window2->resize(969, 760);
        textBrowser = new QTextBrowser(Window2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 991, 221));
        label_2 = new QLabel(Window2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 140, 101, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label = new QLabel(Window2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 180, 971, 581));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/img/slide-7.jpg")));

        retranslateUi(Window2);

        QMetaObject::connectSlotsByName(Window2);
    } // setupUi

    void retranslateUi(QDialog *Window2)
    {
        Window2->setWindowTitle(QCoreApplication::translate("Window2", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Window2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<ol style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-family:'Verdana','Times New Roman','Georgia','Helvetica','sans-serif'; font-size:8pt; color:#000000;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16px;\">\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\320\265\320\273\321\214 \316\224 \320\276\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \320\274\320\260\321\202\321\200\320\270\321\206\321\213\302"
                        "\240</span><span style=\" font-family:'Times New Roman','Verdana','Georgia','Helvetica','sans-serif'; font-size:20px; font-style:italic;\">A</span><span style=\" font-size:16px;\">.</span></li>\n"
"<li style=\" font-family:'Verdana','Times New Roman','Georgia','Helvetica','sans-serif'; font-size:8pt; color:#000000;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16px;\">\320\222\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\320\265 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\320\265\320\273\321\217 \316\224</span><span style=\" font-size:12px;\">1</span><span style=\" font-size:16px;\">\302\240\320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\275\320\276\320\271 \320\274\320\260\321\202\321\200\320\270\321\206\321\213\302\240</span><span style=\" font-family:'Times New Roman','Verdana','Georgia','Helvetica','sans-serif'; font-size:20px; font-style:italic;\">"
                        "A</span><span style=\" font-size:12px;\">1 </span><span style=\" font-size:16px;\">.</span></li>\n"
"<li style=\" font-family:'Verdana','Times New Roman','Georgia','Helvetica','sans-serif'; font-size:8pt; color:#000000;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16px;\">\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\321\203\321\216\302\240</span><span style=\" font-family:'Times New Roman','Verdana','Georgia','Helvetica','sans-serif'; font-size:20px; font-style:italic;\">x</span><span style=\" font-size:12px;\">1</span><span style=\" font-size:16px;\">=\316\224</span><span style=\" font-size:12px;\">1</span><span style=\" font-size:16px;\">/\316\224.</span></li>\n"
"<li style=\" font-family:'Verdana','Times New Roman','Georgia','Helvetica','sans-serif'; font-size:8pt; color:#000000;\" style=\" margin-top:0px; margin-bott"
                        "om:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16px;\">\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\321\214 \321\210\320\260\320\263\320\270 2\342\210\2223 \320\264\320\273\321\217 \321\201\321\202\320\276\320\273\320\261\321\206\320\276\320\262 2, 3.</span></li></ol></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Window2", "\320\237\321\200\320\270\320\274\320\265\321\200:", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Window2: public Ui_Window2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW2_H

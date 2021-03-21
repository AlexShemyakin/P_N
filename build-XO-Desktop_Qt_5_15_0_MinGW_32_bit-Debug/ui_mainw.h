/********************************************************************************
** Form generated from reading UI file 'mainw.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINW_H
#define UI_MAINW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainW
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *push_nav;
    QPushButton *push_put;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainW)
    {
        if (MainW->objectName().isEmpty())
            MainW->setObjectName(QString::fromUtf8("MainW"));
        MainW->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainW->sizePolicy().hasHeightForWidth());
        MainW->setSizePolicy(sizePolicy);
        MainW->setMaximumSize(QSize(800, 600));
        MainW->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resurces/naval.png"), QSize(), QIcon::Selected, QIcon::On);
        MainW->setWindowIcon(icon);
        MainW->setWindowOpacity(10.000000000000000);
        MainW->setToolTipDuration(-1);
        MainW->setLayoutDirection(Qt::LeftToRight);
        MainW->setAutoFillBackground(false);
        MainW->setStyleSheet(QString::fromUtf8("background-image: url(:/resurces/background_2.jpg);"));
        MainW->setIconSize(QSize(50, 50));
        centralwidget = new QWidget(MainW);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 40, 451, 40));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Txt_IV25"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(70, 90, 661, 131));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe Print"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(220, 260, 302, 101));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        push_nav = new QPushButton(widget);
        push_nav->setObjectName(QString::fromUtf8("push_nav"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(push_nav->sizePolicy().hasHeightForWidth());
        push_nav->setSizePolicy(sizePolicy1);
        push_nav->setMinimumSize(QSize(0, 0));
        push_nav->setMaximumSize(QSize(300, 150));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        push_nav->setFont(font2);
        push_nav->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);\n"
"color: rgb(255, 0, 0);"));
        push_nav->setCheckable(false);
        push_nav->setAutoRepeat(false);
        push_nav->setAutoExclusive(false);

        verticalLayout->addWidget(push_nav);

        push_put = new QPushButton(widget);
        push_put->setObjectName(QString::fromUtf8("push_put"));
        sizePolicy.setHeightForWidth(push_put->sizePolicy().hasHeightForWidth());
        push_put->setSizePolicy(sizePolicy);
        push_put->setMinimumSize(QSize(0, 0));
        push_put->setMaximumSize(QSize(300, 150));
        push_put->setFont(font2);
        push_put->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);\n"
"color: rgb(255, 0, 0);"));

        verticalLayout->addWidget(push_put);

        MainW->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainW);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainW->setMenuBar(menubar);

        retranslateUi(MainW);

        QMetaObject::connectSlotsByName(MainW);
    } // setupUi

    void retranslateUi(QMainWindow *MainW)
    {
        MainW->setWindowTitle(QCoreApplication::translate("MainW", "\320\237\321\203\321\202\320\270\320\275\320\272\320\270-\320\235\320\260\320\262\320\260\320\273\321\214\320\275\320\270\320\272\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainW", "\320\237\321\203\321\202\320\270\320\275\320\272\320\270-\320\235\320\260\320\262\320\260\320\273\321\214\320\275\320\270\320\272\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainW", "\320\235\320\260\320\264\320\276\320\265\320\273\320\276 \321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\275\320\260 \320\262\320\265\321\207\320\275\321\213\320\271 \320\272\320\276\320\275\321\204\320\273\320\270\320\272\321\202 \320\237\321\203\321\202\320\270\320\275\320\260 \320\270 \320\235\320\260\320\262\320\260\320\273\321\214\320\275\320\276\320\263\320\276?\n"
"\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\270 \320\272\321\202\320\276 \320\270\320\267 \320\275\320\270\321\205 \321\201\320\270\320\273\321\214\320\275\320\265\320\265 \320\262 \321\201\320\260\320\274\320\276\320\271 \320\267\320\260\321\205\320\262\320\260\321\202\321\213\320\262\320\260\321\216\321\211\320\265\320\271 \320\270\320\263\321\200\320\265\n"
"\321\201\320\276\320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\321\201\321\202\320\270 \"\320\237\321\203\321\202\320\270\320\275\320\272\320\270-\320\235\320\260\320\262\320\260\320\273\321\214\320\275\320\270\320\272\320\270\"!"
                        " ", nullptr));
        push_nav->setText(QCoreApplication::translate("MainW", "\320\237\320\265\321\200\320\262\321\213\320\271 \321\205\320\276\320\264\320\270\321\202 \n"
" \320\223\320\265\321\200\320\274\320\260\320\275\321\201\320\272\320\270\320\271 \320\277\320\260\321\206\320\270\320\265\320\275\321\202", nullptr));
        push_put->setText(QCoreApplication::translate("MainW", "\320\237\320\265\321\200\320\262\321\213\320\271 \321\205\320\276\320\264\320\270\321\202\n"
" \320\237\321\203\321\202\320\270\320\275 \320\222.\320\222.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainW: public Ui_MainW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINW_H

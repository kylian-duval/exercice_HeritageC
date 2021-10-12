/********************************************************************************
** Form generated from reading UI file 'exercice1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERCICE1_H
#define UI_EXERCICE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exercice1Class
{
public:
    QWidget *centralWidget;
    QLabel *labelScore;
    QPushButton *ButtonLancerDe;
    QPushButton *ButtonAfficheScoreDe;
    QPushButton *ButtonResetScore;
    QLabel *label;
    QLabel *labelDe;
    QLabel *label_2;
    QListWidget *listhistorique;
    QMenuBar *menuBar;
    QMenu *menufichier;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *exercice1Class)
    {
        if (exercice1Class->objectName().isEmpty())
            exercice1Class->setObjectName(QString::fromUtf8("exercice1Class"));
        exercice1Class->resize(611, 400);
        QFont font;
        font.setPointSize(8);
        exercice1Class->setFont(font);
        centralWidget = new QWidget(exercice1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        labelScore = new QLabel(centralWidget);
        labelScore->setObjectName(QString::fromUtf8("labelScore"));
        labelScore->setGeometry(QRect(160, 230, 141, 31));
        QFont font1;
        font1.setPointSize(25);
        labelScore->setFont(font1);
        ButtonLancerDe = new QPushButton(centralWidget);
        ButtonLancerDe->setObjectName(QString::fromUtf8("ButtonLancerDe"));
        ButtonLancerDe->setGeometry(QRect(110, 70, 75, 23));
        ButtonAfficheScoreDe = new QPushButton(centralWidget);
        ButtonAfficheScoreDe->setObjectName(QString::fromUtf8("ButtonAfficheScoreDe"));
        ButtonAfficheScoreDe->setGeometry(QRect(100, 110, 121, 23));
        ButtonResetScore = new QPushButton(centralWidget);
        ButtonResetScore->setObjectName(QString::fromUtf8("ButtonResetScore"));
        ButtonResetScore->setGeometry(QRect(150, 270, 101, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 230, 61, 20));
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);
        labelDe = new QLabel(centralWidget);
        labelDe->setObjectName(QString::fromUtf8("labelDe"));
        labelDe->setGeometry(QRect(260, 100, 51, 51));
        labelDe->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 30, 51, 20));
        listhistorique = new QListWidget(centralWidget);
        listhistorique->setObjectName(QString::fromUtf8("listhistorique"));
        listhistorique->setGeometry(QRect(350, 30, 256, 192));
        exercice1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(exercice1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 611, 19));
        menufichier = new QMenu(menuBar);
        menufichier->setObjectName(QString::fromUtf8("menufichier"));
        exercice1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(exercice1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        exercice1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(exercice1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        exercice1Class->setStatusBar(statusBar);

        menuBar->addAction(menufichier->menuAction());

        retranslateUi(exercice1Class);
        QObject::connect(ButtonLancerDe, SIGNAL(clicked()), exercice1Class, SLOT(lanceDe()));
        QObject::connect(ButtonAfficheScoreDe, SIGNAL(clicked()), exercice1Class, SLOT(afficheDe()));
        QObject::connect(ButtonResetScore, SIGNAL(clicked()), exercice1Class, SLOT(resetScore()));

        QMetaObject::connectSlotsByName(exercice1Class);
    } // setupUi

    void retranslateUi(QMainWindow *exercice1Class)
    {
        exercice1Class->setWindowTitle(QCoreApplication::translate("exercice1Class", "exercice1", nullptr));
        labelScore->setText(QString());
        ButtonLancerDe->setText(QCoreApplication::translate("exercice1Class", "lancer le d\303\251", nullptr));
        ButtonAfficheScoreDe->setText(QCoreApplication::translate("exercice1Class", "afficher le score du d\303\251", nullptr));
        ButtonResetScore->setText(QCoreApplication::translate("exercice1Class", "reset mon score", nullptr));
        label->setText(QCoreApplication::translate("exercice1Class", "score :", nullptr));
        labelDe->setText(QString());
        label_2->setText(QCoreApplication::translate("exercice1Class", "historique:", nullptr));
        menufichier->setTitle(QCoreApplication::translate("exercice1Class", "fichier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exercice1Class: public Ui_exercice1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERCICE1_H

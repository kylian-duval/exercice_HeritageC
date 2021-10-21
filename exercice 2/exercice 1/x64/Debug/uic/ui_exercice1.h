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
#include <QtWidgets/QLineEdit>
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
    QAction *actionde;
    QAction *actiondehisto;
    QAction *actionquitte;
    QWidget *centralWidget;
    QLabel *labelScore;
    QPushButton *ButtonLancerDe;
    QPushButton *ButtonResetScore;
    QLabel *label;
    QLabel *labelDe;
    QLabel *label_2;
    QListWidget *listhistorique;
    QLabel *labelmenuprincipal;
    QLabel *labelbienvenu;
    QLabel *labelNombreLancer;
    QLineEdit *lineEditNlancer;
    QPushButton *ButtonNlancer;
    QLabel *labelResultat;
    QLabel *labelgif;
    QLabel *labelDeGif;
    QLabel *labelError;
    QMenuBar *menuBar;
    QMenu *menufichier;
    QMenu *menuchoisir;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *exercice1Class)
    {
        if (exercice1Class->objectName().isEmpty())
            exercice1Class->setObjectName(QString::fromUtf8("exercice1Class"));
        exercice1Class->setEnabled(true);
        exercice1Class->resize(646, 362);
        QFont font;
        font.setPointSize(8);
        exercice1Class->setFont(font);
        exercice1Class->setStyleSheet(QString::fromUtf8(""));
        actionde = new QAction(exercice1Class);
        actionde->setObjectName(QString::fromUtf8("actionde"));
        actiondehisto = new QAction(exercice1Class);
        actiondehisto->setObjectName(QString::fromUtf8("actiondehisto"));
        actionquitte = new QAction(exercice1Class);
        actionquitte->setObjectName(QString::fromUtf8("actionquitte"));
        centralWidget = new QWidget(exercice1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("exercice1Class{\n"
"	background-color: rgb(97, 121, 255);\n"
"}"));
        labelScore = new QLabel(centralWidget);
        labelScore->setObjectName(QString::fromUtf8("labelScore"));
        labelScore->setGeometry(QRect(160, 230, 141, 31));
        QFont font1;
        font1.setPointSize(25);
        labelScore->setFont(font1);
        ButtonLancerDe = new QPushButton(centralWidget);
        ButtonLancerDe->setObjectName(QString::fromUtf8("ButtonLancerDe"));
        ButtonLancerDe->setGeometry(QRect(110, 70, 75, 23));
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
        labelmenuprincipal = new QLabel(centralWidget);
        labelmenuprincipal->setObjectName(QString::fromUtf8("labelmenuprincipal"));
        labelmenuprincipal->setGeometry(QRect(10, 150, 141, 31));
        labelbienvenu = new QLabel(centralWidget);
        labelbienvenu->setObjectName(QString::fromUtf8("labelbienvenu"));
        labelbienvenu->setGeometry(QRect(10, 130, 221, 21));
        labelNombreLancer = new QLabel(centralWidget);
        labelNombreLancer->setObjectName(QString::fromUtf8("labelNombreLancer"));
        labelNombreLancer->setGeometry(QRect(10, 160, 91, 16));
        lineEditNlancer = new QLineEdit(centralWidget);
        lineEditNlancer->setObjectName(QString::fromUtf8("lineEditNlancer"));
        lineEditNlancer->setGeometry(QRect(110, 160, 41, 20));
        ButtonNlancer = new QPushButton(centralWidget);
        ButtonNlancer->setObjectName(QString::fromUtf8("ButtonNlancer"));
        ButtonNlancer->setGeometry(QRect(160, 160, 111, 23));
        labelResultat = new QLabel(centralWidget);
        labelResultat->setObjectName(QString::fromUtf8("labelResultat"));
        labelResultat->setGeometry(QRect(450, 0, 71, 21));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        labelResultat->setFont(font3);
        labelResultat->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)\n"
""));
        labelgif = new QLabel(centralWidget);
        labelgif->setObjectName(QString::fromUtf8("labelgif"));
        labelgif->setGeometry(QRect(280, 90, 331, 221));
        labelDeGif = new QLabel(centralWidget);
        labelDeGif->setObjectName(QString::fromUtf8("labelDeGif"));
        labelDeGif->setGeometry(QRect(50, 200, 231, 141));
        labelError = new QLabel(centralWidget);
        labelError->setObjectName(QString::fromUtf8("labelError"));
        labelError->setGeometry(QRect(30, 140, 291, 20));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        labelError->setFont(font4);
        labelError->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)"));
        exercice1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(exercice1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 646, 21));
        menufichier = new QMenu(menuBar);
        menufichier->setObjectName(QString::fromUtf8("menufichier"));
        menuchoisir = new QMenu(menuBar);
        menuchoisir->setObjectName(QString::fromUtf8("menuchoisir"));
        exercice1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(exercice1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        exercice1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(exercice1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        exercice1Class->setStatusBar(statusBar);

        menuBar->addAction(menufichier->menuAction());
        menuBar->addAction(menuchoisir->menuAction());
        menufichier->addAction(actionquitte);
        menuchoisir->addAction(actionde);
        menuchoisir->addAction(actiondehisto);

        retranslateUi(exercice1Class);
        QObject::connect(ButtonLancerDe, SIGNAL(clicked()), exercice1Class, SLOT(lanceDe()));
        QObject::connect(ButtonResetScore, SIGNAL(clicked()), exercice1Class, SLOT(resetScore()));
        QObject::connect(actionde, SIGNAL(triggered()), exercice1Class, SLOT(AffichedeNormal()));
        QObject::connect(actiondehisto, SIGNAL(triggered()), exercice1Class, SLOT(AfficheDeHisto()));
        QObject::connect(ButtonNlancer, SIGNAL(clicked()), exercice1Class, SLOT(Nlancer()));
        QObject::connect(actionquitte, SIGNAL(triggered()), exercice1Class, SLOT(exit()));

        QMetaObject::connectSlotsByName(exercice1Class);
    } // setupUi

    void retranslateUi(QMainWindow *exercice1Class)
    {
        exercice1Class->setWindowTitle(QCoreApplication::translate("exercice1Class", "exercice1", nullptr));
        actionde->setText(QCoreApplication::translate("exercice1Class", "de", nullptr));
        actiondehisto->setText(QCoreApplication::translate("exercice1Class", "dehisto", nullptr));
        actionquitte->setText(QCoreApplication::translate("exercice1Class", "Quitter", nullptr));
        labelScore->setText(QString());
        ButtonLancerDe->setText(QCoreApplication::translate("exercice1Class", "lancer le d\303\251", nullptr));
        ButtonResetScore->setText(QCoreApplication::translate("exercice1Class", "reset mon score", nullptr));
        label->setText(QCoreApplication::translate("exercice1Class", "score :", nullptr));
        labelDe->setText(QString());
        label_2->setText(QCoreApplication::translate("exercice1Class", "historique:", nullptr));
        labelmenuprincipal->setText(QCoreApplication::translate("exercice1Class", "choisir le mode de D\303\251", nullptr));
        labelbienvenu->setText(QCoreApplication::translate("exercice1Class", "bienvenu sur le symulateur de lanceur de De !! ", nullptr));
        labelNombreLancer->setText(QCoreApplication::translate("exercice1Class", "Nombre de lancer :", nullptr));
        ButtonNlancer->setText(QCoreApplication::translate("exercice1Class", "lance le simulateur", nullptr));
        labelResultat->setText(QCoreApplication::translate("exercice1Class", "R\303\251sultat", nullptr));
        labelgif->setText(QString());
        labelDeGif->setText(QString());
        labelError->setText(QString());
        menufichier->setTitle(QCoreApplication::translate("exercice1Class", "fichier", nullptr));
        menuchoisir->setTitle(QCoreApplication::translate("exercice1Class", "choisir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exercice1Class: public Ui_exercice1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERCICE1_H

#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_exercice1.h"
#include "dé.h"
#include "dehisto.h"
#include <QMovie>
#include <QThread>


class exercice1 : public QMainWindow
{
    Q_OBJECT
	
public:
    exercice1(QWidget *parent = Q_NULLPTR);
	void MenuPrincipal();
	
	
private:
	QMovie * movie = new QMovie(this);
	QMovie * movie2 = new QMovie(this);
	dé * DE = new dé();
	dehisto * DEHISTO = new dehisto();
    Ui::exercice1Class ui;
	void afficheScore();
	
public slots:
	void lanceDe();
	void afficheDe();
	void resetScore();
	void AffichedeNormal();
	void AfficheDeHisto();
	void Nlancer();
};

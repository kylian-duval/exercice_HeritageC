#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_exercice1.h"
#include "d�.h"
#include "dehisto.h"


class exercice1 : public QMainWindow
{
    Q_OBJECT

public:
    exercice1(QWidget *parent = Q_NULLPTR);
	void MenuPrincipal();
	
private:
	d� * DE = new d�();
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

#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_exercice1.h"
#include "d�.h"


class exercice1 : public QMainWindow
{
    Q_OBJECT

public:
    exercice1(QWidget *parent = Q_NULLPTR);
	
private:
	d� * DE = new d�();
    Ui::exercice1Class ui;
	void afficheScore();
public slots:
	void lanceDe();
	void afficheDe();
	void resetScore();
};

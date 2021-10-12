#include "exercice1.h"

exercice1::exercice1(QWidget *parent) : QMainWindow(parent)
{
    ui.setupUi(this);

}
 
void exercice1::afficheScore() {
	QString score = QString::number(DE->getScore());
	ui.labelScore->setText(score);
	
}
void exercice1::afficheDe() {
	int scoreInt;
	scoreInt = DE->getDé();
	QString score = QString::number(scoreInt);
	ui.labelDe->setText(score);
}


void exercice1::resetScore() {
	DE->resetScore();
	afficheScore();
}

void exercice1::lanceDe() {
	DE->de();
	DE->ajoutauscore();
	QString scoreDe = QString::number(DE->getDé());
	QString Qnb = QString::number(DE->getNbHistorique());
	ui.listhistorique->addItem(Qnb + ") " + scoreDe);
	exercice1::afficheScore();
	exercice1::afficheDe();
	DE->nombreHistorique();

}



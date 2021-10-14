#include "exercice1.h"

exercice1::exercice1(QWidget *parent) : QMainWindow(parent)
{
    ui.setupUi(this);
	MenuPrincipal();
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
	while (ui.listhistorique->count() > 0)
	{
		ui.listhistorique->takeItem(0);
	}
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

void exercice1::Nlancer() {
	ui.ButtonNlancer->setEnabled(false);
	int NombreDeLancer;
	resetScore();
	QString N = ui.lineEditNlancer->text();
	ui.lineEditNlancer->setText("");
	DEHISTO->giveNombreDeLancer(N.toInt());
	for (int i = 0; i < DEHISTO->getNombreDeLancer(); i++) {
	DEHISTO->NLancer(DEHISTO->getNombreDeLancer());
	QString result = QString::number(DEHISTO->getresult());
	NombreDeLancer++;
	QString nombre = QString::number(NombreDeLancer);
	ui.listhistorique->addItem("lancer" + nombre+ "= " +result);
	}
	QString Qnb = QString::number(DE->getNbHistorique());
	ui.ButtonNlancer->setEnabled(true);
}

void exercice1::AffichedeNormal() {
	ui.labelScore->setVisible(true);
	ui.labelDe->setVisible(true);
	ui.listhistorique->setVisible(true);
	ui.label_2->setVisible(true);
	ui.label->setVisible(true);
	ui.ButtonAfficheScoreDe->setVisible(true);
	ui.ButtonLancerDe->setVisible(true);
	ui.ButtonResetScore->setVisible(true);
	ui.labelbienvenu->setVisible(false);
	ui.labelmenuprincipal->setVisible(false);
	ui.labelNombreLancer->setVisible(false);
	ui.labelmenuprincipal->setVisible(false);
	ui.ButtonNlancer->setVisible(false);
	ui.lineEditNlancer->setVisible(false);
	ui.labelNombreLancer->setVisible(false);
	
}

void exercice1::AfficheDeHisto() {
	ui.labelScore->setVisible(false);
	ui.labelDe->setVisible(false);
	ui.listhistorique->setVisible(true);
	ui.label_2->setVisible(false);
	ui.label->setVisible(false);
	ui.ButtonAfficheScoreDe->setVisible(false);
	ui.ButtonLancerDe->setVisible(false);
	ui.ButtonResetScore->setVisible(false);
	ui.labelbienvenu->setVisible(false);
	ui.labelmenuprincipal->setVisible(false);
	ui.ButtonNlancer->setVisible(true);
	ui.lineEditNlancer->setVisible(true);
	ui.labelNombreLancer->setVisible(true);

}

void exercice1::MenuPrincipal() {
	ui.labelScore->setVisible(false);
	ui.labelDe->setVisible(false);
	ui.listhistorique->setVisible(false);
	ui.label_2->setVisible(false);
	ui.label->setVisible(false);
	ui.ButtonAfficheScoreDe->setVisible(false);
	ui.ButtonLancerDe->setVisible(false);
	ui.ButtonResetScore->setVisible(false);
	ui.ButtonNlancer->setVisible(false);
	ui.lineEditNlancer->setVisible(false);
	ui.labelNombreLancer->setVisible(false);
}


#include "exercice1.h"




exercice1::exercice1(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowIcon(QIcon("image/de.png"));
	MenuPrincipal();
	movie2->setFileName("image/dedeux.gif");
	ui.labelDeGif->setMovie(movie2);
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
	DE->resetnombreHistorique();
	DE->resetScore();
	afficheScore();
	ui.labelDe->setText("0");
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
	QString N = ui.lineEditNlancer->text();
	ui.labelError->setText("");
	ui.lineEditNlancer->setText("");

	int n = N.toInt();
	if (n <= 7) {
		ui.ButtonNlancer->setEnabled(false);
		int NombreDeLancer;
		ui.listhistorique->clear();
		DEHISTO->giveNombreDeLancer(N.toInt());

		for (int i = 0; i < DEHISTO->getNombreDeLancer(); i++)
		{
			DEHISTO->jet(DEHISTO->getNombreDeLancer());
			QString result = QString::number(DEHISTO->getresult());
			DEHISTO->tab[i] = result.toInt();
			NombreDeLancer++;
			QString nombre = QString::number(NombreDeLancer);
			ui.listhistorique->addItem("lancer" + nombre + "= " + QString::number(DEHISTO->tab[i]));
		}

		ui.ButtonNlancer->setEnabled(true);
	}
	else {
		ui.labelError->setText("error on peut faire juste un simulation au maximun de 7");
	}

}

void exercice1::exit() {
	qApp->exit();
}

//---------------------------------------------GESTION DES MENU ----------------------------------------------------------------------------------------------------------------







//------------------------------------------GESTION MENU SIMULATION LANCER --------------------------------------------------------------------------------------------
void exercice1::AffichedeNormal() {
	ui.labelScore->setVisible(true);
	ui.labelDe->setVisible(true);
	ui.listhistorique->setVisible(true);
	ui.label_2->setVisible(true);
	ui.label->setVisible(true);
	ui.ButtonLancerDe->setVisible(true);
	ui.ButtonResetScore->setVisible(true);
	ui.labelbienvenu->setVisible(false);
	ui.labelmenuprincipal->setVisible(false);
	ui.labelNombreLancer->setVisible(false);
	ui.labelmenuprincipal->setVisible(false);
	ui.ButtonNlancer->setVisible(false);
	ui.lineEditNlancer->setVisible(false);
	ui.labelNombreLancer->setVisible(false);
	ui.labelResultat->setVisible(false);
	ui.labelgif->setVisible(false);
	ui.labelDeGif->setVisible(false);
	
}

//----------------------------------------------GESTION MENU SIMULATION N LANCER-------------------------------------------------------------------------------------------
void exercice1::AfficheDeHisto() {
	ui.labelScore->setVisible(false);
	ui.labelDe->setVisible(false);
	ui.listhistorique->setVisible(true);
	ui.label_2->setVisible(false);
	ui.label->setVisible(false);
	ui.ButtonLancerDe->setVisible(false);
	ui.ButtonResetScore->setVisible(false);
	ui.labelbienvenu->setVisible(false);
	ui.labelmenuprincipal->setVisible(false);
	ui.ButtonNlancer->setVisible(true);
	ui.lineEditNlancer->setVisible(true);
	ui.labelNombreLancer->setVisible(true);
	ui.labelResultat->setVisible(true);
	ui.labelgif->setVisible(false);
	movie2->start();
	ui.labelDeGif->show();
}

//---------------------------------------------GESTION MENU PRINCIPAL------------------------------------------------------------------
void exercice1::MenuPrincipal() {
	setFixedSize(646, 400);
	ui.labelScore->setVisible(false);
	ui.labelDe->setVisible(false);
	ui.listhistorique->setVisible(false);
	ui.label_2->setVisible(false);
	ui.label->setVisible(false);
	ui.ButtonLancerDe->setVisible(false);
	ui.ButtonResetScore->setVisible(false);
	ui.ButtonNlancer->setVisible(false);
	ui.lineEditNlancer->setVisible(false);
	ui.labelNombreLancer->setVisible(false);
	ui.labelResultat->setVisible(false);
	ui.labelDeGif->setVisible(false);
	movie->setFileName("image/de.gif");
	ui.labelgif->setMovie(movie);
	movie->start();
	movie->setSpeed(1000);
	ui.labelgif->show();
}


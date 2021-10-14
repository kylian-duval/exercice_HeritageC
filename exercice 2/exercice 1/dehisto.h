#pragma once
#include "dé.h"
class dehisto : public dé
{
private:
	int NombreDeLancer;
	int resultat[100];
	int IntResultat = 0;
	int tab[7];
public: 
	int getNombreDeLancer();
	void giveNombreDeLancer(int N);
	int getresult();
	void jet(); 
	void jet(int n);
};


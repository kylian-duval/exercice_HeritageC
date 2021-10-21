#pragma once
#include "dé.h"
class dehisto : public dé
{
private:
	int NombreDeLancer;
	int resultat[100];
	int IntResultat = 0;
public: 
	int tab[7];
	int getNombreDeLancer();
	void giveNombreDeLancer(int N);
	int getresult();
	void jet(); 
	void jet(int n);
};


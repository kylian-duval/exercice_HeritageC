#pragma once
#include "d�.h"
class dehisto : public d�
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


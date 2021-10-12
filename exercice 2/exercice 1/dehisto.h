#pragma once
#include "dé.h"
class dehisto : public dé
{
private:
	int NombreDeLancer;
	int resultat[100];
	
public: 
	void NLancer(int N);
	int getNombreDeLancer();
	void giveNombreDeLancer(int N);
};


#pragma once
#include "d�.h"
class dehisto : public d�
{
private:
	int NombreDeLancer;
	int resultat[100];
	int IntResultat = 0;
	
public: 
	void NLancer(int N);
	int getNombreDeLancer();
	void giveNombreDeLancer(int N);
	int getresult();
};


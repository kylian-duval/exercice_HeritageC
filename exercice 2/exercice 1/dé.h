#pragma once
#include <iostream>
#include <random>
class dé
{
private:
	int De = 0;
	int score = 0;
	int NbHistorique = 1;
public:
	void ajoutauscore();
	void resetScore();
	void resetnombreHistorique();
	void de();
	int getDé();
	int getScore();
	void nombreHistorique();
	int getNbHistorique();

};


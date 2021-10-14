#include "dehisto.h"

void dehisto::jet(int n)
{
	using std::cout;
	using std::endl;

	//for (int i = 0; i < N; i++) {

	std::random_device rd;
	std::default_random_engine eng(rd());
	std::uniform_int_distribution<int> distr(1, 6);
	//this->resultat[i] = distr(eng);
//}
	this->IntResultat = distr(eng);
}


int dehisto::getNombreDeLancer()
{
	return this->NombreDeLancer;
}

void dehisto::giveNombreDeLancer(int N)
{
	this->NombreDeLancer = N;
}

int dehisto::getresult() {
	return IntResultat;
}

void dehisto::jet()
{
	
}

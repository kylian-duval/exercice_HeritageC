#include "dehisto.h"

void dehisto::jet(int n)
{
	using std::cout;
	using std::endl;



	std::random_device rd;
	std::default_random_engine eng(rd());
	std::uniform_int_distribution<int> distr(1, 6);

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

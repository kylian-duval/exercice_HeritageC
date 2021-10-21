#include "dé.h"

void dé::ajoutauscore() {
	this->score = this->score + this->De;
}

void dé::de() {

	using std::cout;
	using std::endl;

	std::random_device rd;
	std::default_random_engine eng(rd());
	std::uniform_int_distribution<int> distr(1, 6);
	this->De = distr(eng);
	
}

int dé::getDé() {
	return this->De;
}

int dé::getScore() {
	return this->score;
}

void dé::resetScore(){
	this->score = 0;
}

void dé::nombreHistorique() {
	NbHistorique++;
}

void dé::resetnombreHistorique(){
	this->NbHistorique = 1;
}

int dé::getNbHistorique() {
	return NbHistorique;
}


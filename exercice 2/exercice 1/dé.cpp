#include "d�.h"

void d�::ajoutauscore() {
	this->score = this->score + this->De;
}

void d�::de() {

	using std::cout;
	using std::endl;

	std::random_device rd;
	std::default_random_engine eng(rd());
	std::uniform_int_distribution<int> distr(1, 6);
	this->De = distr(eng);
	
}

int d�::getD�() {
	return this->De;
}

int d�::getScore() {
	return this->score;
}

void d�::resetScore(){
	this->score = 0;
}

void d�::nombreHistorique() {
	NbHistorique++;
}

void d�::resetnombreHistorique(){
	this->NbHistorique = 1;
}

int d�::getNbHistorique() {
	return NbHistorique;
}


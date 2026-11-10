#include "Tableau.h"
#include<iostream>
using namespace std;
Tableau::Tableau(int n) {
	this->taille = n;
	this->Tab = new double[n];

	for (int i = 0;i < taille;i++) {
		Tab[i] = 0;
	}

}

Tableau::Tableau(const Tableau& T)
{
	this->taille = T.taille;
	this->Tab = new double[T.taille];
	for (int i = 0;i < taille;i++) {
		Tab[i] = T.Tab[i];
	}

}

Tableau Tableau::operator=(const Tableau& t)
{
	this->taille = t.taille;
	this->Tab = new double[t.taille];
	for (int i = 0;i < taille;i++) {
		Tab[i] = t.Tab[i];
	}
	return *this;
}

double & Tableau::operator[](int i) const
{
	if (i>= 0 && i <this->taille) {
		return Tab[i];
	}
	else {
		exit(-1);
	}
}

void Tableau::afficher() {

	for (int i = 0;i < taille;i++) {
		cout << "Tab[" << i << "] = " << Tab[i] << endl;
	}
}

Tableau::~Tableau() {
	delete[]Tab;
}
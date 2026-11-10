#include "TableauBorne.h"
#include <iostream>
using namespace std;

TableauBorne::TableauBorne(int n, float borneInf, float borneSup) : Tableau(n) {
	this->borneSup = borneSup;
	this->borneInf = borneInf;
}



double TableauBorne::operator[](int i) const
{
	return Tableau::operator[](i);
}

void TableauBorne::modifier(int i, double valeur)
{
	if (valeur >= borneInf && valeur <= borneSup) {
		Tableau::operator[](i) = valeur;
	}
	else {
		cout << "Valeur hors des bornes [" << borneInf << ", " << borneSup << "]" << endl;
	}
}





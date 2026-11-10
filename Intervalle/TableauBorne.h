#pragma once
#include "Tableau.h"
class TableauBorne :public Tableau
{
private:
	float borneSup;
	float borneInf;
public:
	TableauBorne(int, float, float);
	double operator[](int)const;//retourne un valeur pour ne pas pouvoir modifier la valeur
	void modifier(int i, double valeur);//une methode pour modifier la valeur d'un element du tableau en respectant les bornes, cest optionel
};


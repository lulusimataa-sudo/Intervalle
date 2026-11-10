#pragma once
class Tableau
{
private:
	double * Tab;
	int taille;

public:
	Tableau(int);
	Tableau(const Tableau& T);
	Tableau operator=(const Tableau& T);
	double& operator[](int) const;//retourne une reference pour pouvoir modifier la valeur
	void afficher();
	~Tableau();
};


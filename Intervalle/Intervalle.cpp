// Intervalle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TableauBorne.h"
using namespace std;
int main()
{
    cout << "===== TABLEAU =====" << std::endl;

    Tableau T1(3);

    T1[0] = 5.5;
    T1[1] = 10.5;
    T1[2] = 15.5;

    cout << "T1: "<<endl;
    T1.afficher();


   
    Tableau T2(T1);
    cout << "T2: " << endl;
    cout << "Apres Constructeur de recopie: " << endl;
    T2.afficher();
    Tableau T3(2);

    T3 = T1;
    cout << "T3: " << endl;
    cout << "Apres affectation: " << endl ;
    T3.afficher();


    cout << endl;
    cout << "===== TABLEAUBORNE =====" << endl;

    TableauBorne B1(3, 0, 20);
    cout << "Avant modification: " << endl;
	B1.afficher();
	B1.modifier(0, 5.5);
	B1.modifier(1, 10.5);
	B1.modifier(2, 15.5);
    cout << "Apres modification: " << endl;
	B1.afficher();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

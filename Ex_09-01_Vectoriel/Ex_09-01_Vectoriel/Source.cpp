#include "Matrice.h"
#include "Vect.h"
#include <iostream>

using namespace std;

int main() {
	//Initialisation des variables
	float tab1[9] = { 1,2,3,4,5,6,7,8,9 };
	float tab2[9] = { 9,8,7,6,5,4,3,2,1 };
	Matrice cMat1(tab1);
	Matrice cMat2(tab2);
	Vect cV(10.f, 5.f, 97.f);

	//Utilisation de la fonction amie membre
	cout << "Operation avec fct amie membre" << endl;
	cout << "" << endl;
	cout << "Matrice avant operation :" << endl;
	cMat1.affiche();
	cout << "" << endl;
	cout << "Matrice apres operation :" << endl;
	cMat1.prod(cV);
	cMat1.affiche();

	cout << "" << endl;
	cout << "" << endl;

	//Utilisation de la fonction amie independante
	cout << "Operation avec fct amie independante" << endl;
	cout << "" << endl;
	cout << "Matrice avant operation :" << endl;
	cMat2.affiche();
	cout << "" << endl;
	cout << "Matrice apres operation :" << endl;
	prod(cV, cMat2);
	cMat2.affiche();

	return 0;
}
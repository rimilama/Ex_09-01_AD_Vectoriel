#include "Matrice.h"
#include "Vect.h"
#include<iostream>

using namespace std;

//Constructeur
Matrice::Matrice(float *tab) {
	int k = 0,i,j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			this->Mat[i][j] = tab[k];
			k++;
		}
	}
}

//Fonction d'affichage de la matrice
void Matrice::affiche() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << this->Mat[i][j] << ends;
		}
		cout << endl;
	}
}

//fonction amie membre effectuant le produit d'une matrice par un vecteur
Vect Matrice::prod(Vect& vect) {
	float fX = 0, fY = 0, fZ = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			switch (j) {
				case 0:
					fX += this->Mat[i][j] * vect.fX;
					break;
				case 1:
					fY += this->Mat[i][j] * vect.fY;
					break;
				case 2:
					fZ += this->Mat[i][j] * vect.fZ;
					break;
			}
		}
	}
	Vect cResultat(fX, fY, fZ);
	return cResultat;
}

//fonction amie independante effectuant le produit d'une matrice par un vecteur
Vect prod(Vect& vect, Matrice& mat) {
	float fX = 0, fY = 0, fZ = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			switch (j) {
			case 0:
				fX += mat.Mat[i][j] * vect.fX;
				break;
			case 1:
				fY += mat.Mat[i][j] * vect.fY;
				break;
			case 2:
				fZ += mat.Mat[i][j] * vect.fZ;
				break;
			}
		}
	}
	Vect cResultat(fX, fY, fZ);
	return cResultat;
}
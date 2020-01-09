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
void Matrice::prod(Vect& vect) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			switch (j) {
				case 0:
					this->Mat[i][j] = this->Mat[i][j] * vect.fX;
					break;
				case 1:
					this->Mat[i][j] = this->Mat[i][j] * vect.fY;
					break;
				case 2:
					this->Mat[i][j] = this->Mat[i][j] * vect.fZ;
					break;
			}
		}
	}
}

//fonction amie independante effectuant le produit d'une matrice par un vecteur
void prod(Vect& vect, Matrice& mat) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			switch (j) {
			case 0:
				mat.Mat[i][j] = mat.Mat[i][j] * vect.fX;
				break;
			case 1:
				mat.Mat[i][j] = mat.Mat[i][j] * vect.fY;
				break;
			case 2:
				mat.Mat[i][j] = mat.Mat[i][j] * vect.fZ;
				break;
			}
		}
	}
}
#include "Vect.h"
#include<iostream>

using namespace std;

//Constructeur
Vect::Vect() {
	this->fX = 0.f;
	this->fY = 0.f;
	this->fZ = 0.f;
}

Vect::Vect(float fX, float fY, float fZ) {
	this->fX = fX;
	this->fY = fY;
	this->fZ = fZ;
}

//Fonction affichant le vecteur
void Vect::affiche() {
	cout << this->fX << " " << this->fY << " " << this->fZ << endl;
}
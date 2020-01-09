#pragma once
#include "Matrice.h"

class Vect
{
private:
	float fX;
	float fY;
	float fZ;

public:
	//Constructeur
	Vect();
	Vect(float, float, float);

	//Methode
	void affiche();
	friend Vect Matrice::prod(Vect& vect); //fct amie membre
	friend Vect prod(Vect&, Matrice&); //fct amie independante
};


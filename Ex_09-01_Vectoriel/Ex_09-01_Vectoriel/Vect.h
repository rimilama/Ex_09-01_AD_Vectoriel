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
	Vect(float, float, float);

	//Methode
	friend void Matrice::prod(Vect& vect); //fct amie membre
	friend void prod(Vect&, Matrice&); //fct amie independante
};


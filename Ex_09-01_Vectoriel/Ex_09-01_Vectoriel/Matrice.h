#pragma once

//forward déclaration
class Vect; 

class Matrice
{
private:
	float Mat[3][3] = { 0.f };

public:
	//Constructeur
	Matrice(float*);

	//Methode
	void affiche();
	Vect prod(Vect& vect); //fct amie membre
	friend Vect prod(Vect&, Matrice&); //fct amie independante
};


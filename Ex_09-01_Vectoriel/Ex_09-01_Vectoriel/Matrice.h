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
	void prod(Vect& vect); //fct amie membre
	friend void prod(Vect&, Matrice&); //fct amie independante
};


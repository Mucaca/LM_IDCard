// LM_IDCard.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include "stdafx.h"
#include "LM_IDCard.h"
#include "carteIdentite.h"
#include "menu.h"

#define TAILLE 10

int main()
{
	//INITIALISATION
	int choixMenu = 0;
	int _idCarte = 1; //init ID

	carteIdentite tabCarte[TAILLE]; //Cr�ation du tableau de Carte d'identit�

	gestionMenu(_idCarte, _idCarte, tabCarte); //Appel pour cr�er la premi�re carte d'identit�
	_idCarte++;//Incr�mentation de l'ID pour ne pas r��crire sur une autre ID card

	//Choix d'action tant que le user ne d�cide pas de quitter avec "5"
	do
	{

		choixMenu = afficheMenu();//Affiche menu renvoie le num�ro de l'action � effectuer
		gestionMenu(choixMenu, _idCarte, tabCarte);//Appel de l'action
		_idCarte++;//Incr�mentation de l'ID card

	} while (choixMenu != 5);//Sortie de la boucle



    return 0;
}


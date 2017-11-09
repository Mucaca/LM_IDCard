// LM_IDCard.cpp : définit le point d'entrée pour l'application console.
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

	carteIdentite tabCarte[TAILLE]; //Création du tableau de Carte d'identité

	gestionMenu(_idCarte, _idCarte, tabCarte); //Appel pour créer la première carte d'identité
	_idCarte++;//Incrémentation de l'ID pour ne pas réécrire sur une autre ID card

	//Choix d'action tant que le user ne décide pas de quitter avec "5"
	do
	{

		choixMenu = afficheMenu();//Affiche menu renvoie le numéro de l'action à effectuer
		gestionMenu(choixMenu, _idCarte, tabCarte);//Appel de l'action
		_idCarte++;//Incrémentation de l'ID card

	} while (choixMenu != 5);//Sortie de la boucle



    return 0;
}


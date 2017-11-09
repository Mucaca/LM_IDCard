#include "stdafx.h"
#include "menu.h"

int afficheMenu()
{
	int choix = 0;

	cout << "1: Creer carte ID" << endl;
	cout << "2: Afficher carte ID" << endl;
	cout << "3: Modifier carte ID" << endl;
	cout << "4: Supprimer carte ID" << endl;
	cout << "5: Quitter programme" << endl;

	cout << "Veuillez choisir une action ..." << endl;
	cin >> choix;//Choix du user

	return choix;
}//Affiche le menu et renvoie le choix du user

int gestionMenu(int _choix, int pos, carteIdentite _tabCarte[TAILLE])
{
	//Initialisation des données membre de la fonction
	int _ID = 0;
	string _nom;
	string _prenom;
	int _age = 0;
	string _adresse;
	int _codePostal = 0;
	string _ville;

	if (_choix == 1)//Création de la ID card (premier appel par défaut au lancement de l'appli
	{
		//Création de carte
		cout << "Bonjour, veuillez entrer les informations de la carte d'identite." << endl;
		cout << "Nom : " << endl;
		cin >> _nom;

		cout << "Prenom : " << endl;
		cin >> _prenom;

		cout << "Age : " << endl;
		cin >> _age;

		cout << "Adresse (sans espaces) : " << endl;
		cin >> _adresse;

		cout << "Code postal : " << endl;
		cin >> _codePostal;

		cout << "Ville : " << endl;
		cin >> _ville;

		_tabCarte[pos].createCarte(_nom, _prenom, _age, _adresse, _codePostal, _ville);//Créé l'ID card
	}
	else if (_choix == 2)//Afficher l'ID card choisie
	{
		cout << "Veuillez entrer l'ID de la carte que vous voulez afficher" << endl;
		cout << "ID : " << endl;
		cin >> pos;
		_tabCarte[pos].afficheCarte();//Affichage de la carte
	}
	else if (_choix == 3)//Modification d'une carte
	{
		cout << "Veuillez entrer l'ID de la carte que vous voulez modifier" << endl;
		cout << "ID : " << endl;
		cin >> pos;

		cout << "Nom : " << endl;
		cin >> _nom;

		cout << "Prenom : " << endl;
		cin >> _prenom;

		cout << "Age : " << endl;
		cin >> _age;

		cout << "Adresse (sans espaces) : " << endl;
		cin >> _adresse;

		cout << "Code postal : " << endl;
		cin >> _codePostal;

		cout << "Ville : " << endl;
		cin >> _ville;

		_tabCarte[pos].editCarte(_nom, _prenom, _age, _adresse, _codePostal, _ville);//Réécriture sur une carte déjà existente
	}
	else if (_choix == 4)//Suppression d'une ID card
	{
		cout << "Veuillez entrer l'ID de la carte que vous voulez supprimer" << endl;
		cout << "ID : " << endl;
		cin >> pos;

		_tabCarte[pos].deleteCarte();//Suppression de l'ID card
	}
	else if (_choix == 5)
	{
		//Quitter le programme
	}

	return 0;
}

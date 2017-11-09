#pragma once

#include "stdafx.h"

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class carteIdentite
{
	//Données membres de la classe
	int ID;
	string nom;
	string prenom;
	int age;
	string adresse;
	int codePostal;
	string ville;

public:
	carteIdentite();//Constructeur
	~carteIdentite();//Déstructeur

	//GETTERS
	int getID();
	string getNom();
	string getPrenom();
	int getAge();
	string getAdresse();
	int getCodePostal();
	string getVille();

	//SETTERS
	void setID(int _id);
	void setNom(string _nom);
	void setPrenom(string _prenom);
	void setAge(int _age);
	void setAdresse(string _adresse);
	void setCodePostal(int _CP);
	void setVille(string _ville);

	//FUNCTIONS
	//Create
	void createCarte(string _nom, string _prenom, int _age, string _adresse, int _CP, string _ville);
	//Edit
	void editCarte(string _nom, string _prenom, int _age, string _adresse, int _CP, string _ville);
	//Delete
	void deleteCarte();
	//Display
	void afficheCarte();
};


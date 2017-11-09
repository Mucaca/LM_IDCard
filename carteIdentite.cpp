#include "stdafx.h"
#include "carteIdentite.h"
#include <iostream>

using namespace std;

carteIdentite::carteIdentite()
{
	this->ID = NULL;
	this->age = NULL;
	this->codePostal = NULL;
}

carteIdentite::~carteIdentite()
{
}

//GETTERS

int carteIdentite::getID()
{
	return this->ID;
}

string carteIdentite::getNom()
{
	return string(this->nom);
}

string carteIdentite::getPrenom()
{
	return string(this->prenom);
}

int carteIdentite::getAge()
{
	return this->age;
}

string carteIdentite::getAdresse()
{
	return string(this->adresse);
}

int carteIdentite::getCodePostal()
{
	return this->codePostal;
}

string carteIdentite::getVille()
{
	return string(this->ville);
}

//SETTERS

void carteIdentite::setID(int _id)
{
	this->ID = _id;
}

void carteIdentite::setNom(string _nom)
{
	this->nom = _nom;
}

void carteIdentite::setPrenom(string _prenom)
{
	this->prenom = _prenom;
}

void carteIdentite::setAge(int _age)
{
	this->age = _age;
}

void carteIdentite::setAdresse(string _adresse)
{
	this->adresse = _adresse;
}

void carteIdentite::setCodePostal(int _CP)
{
	this->codePostal = _CP;
}

void carteIdentite::setVille(string _ville)
{
	this->ville = _ville;
}

//Fonctions membres de la classe
void carteIdentite::createCarte(string _nom, string _prenom, int _age, string _adresse, int _CP, string _ville)
{
	this->setNom(_nom);
	this->setPrenom(_prenom);
	this->setAge(_age);
	this->setAdresse(_adresse);
	this->setCodePostal(_CP);
	this->setVille(_ville);
}

void carteIdentite::editCarte(string _nom, string _prenom, int _age, string _adresse, int _CP, string _ville)
{
	this->setNom(_nom);
	this->setPrenom(_prenom);
	this->setAge(_age);
	this->setAdresse(_adresse);
	this->setCodePostal(_CP);
	this->setVille(_ville);
}

void carteIdentite::deleteCarte()
{
	this->ID = NULL;
	this->setNom("");
	this->setPrenom("");
	this->setAge(NULL);
	this->setAdresse("");
	this->setCodePostal(NULL);
}

void carteIdentite::afficheCarte()
{
	cout << "ID : " << this->getID() << endl;
	cout << "Nom : " << this->getNom() << endl;
	cout << "Prenom : " << this->getPrenom() << endl;
	cout << "Age : " << this->getAge() << endl;
	cout << "Adresse : " << this->getAdresse() << endl;
	cout << "Code Postal : " << this->getCodePostal() << endl;
	cout << "Ville : " << this->getVille() << endl;
}

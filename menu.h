#pragma once

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include "carteIdentite.h"

#define TAILLE 10

int afficheMenu();//Permet d'afficher le menu de choix comprenant : - Créer - Afficher - Modifier - Supprimer - Quitter programme
int gestionMenu(int _choix, int pos, carteIdentite _tabCarte[TAILLE]);//Gestion du choix fait dans le menu

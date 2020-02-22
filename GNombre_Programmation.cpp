// GNombre_Programmation.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;
int etat;
const int E0 = 0, E1 = 1, E2 = 2, E3 = 3, E4 = 4, E5 = 5, E6 = 6, E7 = 7, E8 = 8, E9 = 9, E10 = 10;
char reponse;
typedef string GNOMBRE;
GNOMBRE gn1, gn2;
int temp;
int reste;

void menu() {
	system("cls");
	cout << "\n--------------------------------------------" << endl;
	cout << "PROJET 1 - GESTION DES GRANDS NOMBRES";
	cout << "\n--------------------------------------------" << endl;
	cout << "MENU GENERAL" << endl;
	cout << "\n1) Addition de 2 nombres";
	cout << "\n2) Soustraction de 2 nombres";
	cout << "\n3) Multiplication de 2 nombres";
	cout << "\n4) Division de 2 nombres";
	cout << "\n5) Minimum de 2 nombres";
	cout << "\n6) Programme 1";
	cout << "\n7) Programme 2";
	cout << "\n8) Programme 3";
	cout << "\nQ) Quitter le logiciel" << endl;
	cout << "\n Choix: "; reponse = _getch(); //L'utilisateur est demandé de choisir l'option.
	switch (reponse)
	{
	case '1': etat = E1; break;
	case '2': etat = E2; break;
	case '3': etat = E3; break;
	case '4': etat = E4; break;
	case '5': etat = E5; break;
	case '6': etat = E6; break;
	case '7': etat = E7; break;
	case '8': etat = E8; break;
	case 'Q': etat = E9; break; //Quitter.
	case 'q': etat = E9; break; //Quitter.
	default:
		etat = E0;
	}
}

//Fonction pour quitter le logiciel.
void quitter() {
	system("cls");
	cout << "\n--------------------------------------------" << endl;
	cout << "PROJET 1 - GESTION DES GRANDS NOMBRES" << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "FIN DU PROGRAMME";
	cout << "\nMerci davoir utilise le gestionnaire des grands nombres" << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "Appuyez sur une touche pour finir" << endl;
	system("pause");
	system("cls");
	etat = E10; //L'état 10 sort du logiciel.
}

//Cette fonction égalise les chaines en ajoutant des '0'. Il y a une condition d'arrêt quand les tailles sont exactement les mêmes.
void memeTaille(GNOMBRE& gn1, GNOMBRE& gn2) {
	if ((gn1[0] == '-') && (gn2[0] == '-')) {
		gn1[0] = '0';
		gn2[0] = '0';
		if (gn1.size() > gn2.size()) {
			for (int i = 0; i <= gn1.size(); i++) {
				gn2 = '0' + gn2;
				if (gn1.size() == gn2.size()) {
					gn1 = '-' + gn1;
					gn2 = '-' + gn2;
					break;
				}
			}
		}
		else if (gn1.size() < gn2.size()) {
			for (int j = 0; j <= gn2.size(); j++) {
				gn1 = '0' + gn1;
				if (gn1.size() == gn2.size()) {
					gn1 = '-' + gn1;
					gn2 = '-' + gn2;
					break;
				}
			}
		}
		else if (gn1.size() == gn2.size()) {
			gn1 = '-' + gn1;
			gn2 = '-' + gn2;
		}
	}

	if ((gn1[0] == '+') && (gn2[0] == '-')) {
		gn1[0] = '0';
		gn2[0] = '0';
		if (gn1.size() > gn2.size()) {
			for (int i = 0; i <= gn1.size(); i++) {
				gn2 = '0' + gn2;
				if (gn1.size() == gn2.size()) {
					gn1 = '+' + gn1;
					gn2 = '-' + gn2;
					break;
				}
			}
		}
		else if (gn1.size() < gn2.size()) {
			for (int j = 0; j <= gn2.size(); j++) {
				gn1 = '0' + gn1;
				if (gn1.size() == gn2.size()) {
					gn1 = '+' + gn1;
					gn2 = '-' + gn2;
					break;
				}
			}
		}
		else if (gn1.size() == gn2.size()) {
			gn1 = '+' + gn1;
			gn2 = '-' + gn2;
		}
	}

	if ((gn1[0] == '-') && (gn2[0] == '+')) {
		gn1[0] = '0';
		gn2[0] = '0';
		if (gn1.size() > gn2.size()) {
			for (int i = 0; i <= gn1.size(); i++) {
				gn2 = '0' + gn2;
				if (gn1.size() == gn2.size()) {
					gn1 = '-' + gn1;
					gn2 = '+' + gn2;
					break;
				}
			}
		}
		else if (gn1.size() < gn2.size()) {
			for (int j = 0; j <= gn2.size(); j++) {
				gn1 = '0' + gn1;
				if (gn1.size() == gn2.size()) {
					gn1 = '-' + gn1;
					gn2 = '+' + gn2;
					break;
				}
			}
		}
		else if (gn1.size() == gn2.size()) {
			gn1 = '-' + gn1;
			gn2 = '+' + gn2;
		}
	}

	if ((gn1[0] == '+') && (gn2[0] == '+')) {
		gn1[0] = '0';
		gn2[0] = '0';
		if (gn1.size() > gn2.size()) {
			for (int i = 0; i <= gn1.size(); i++) {
				gn2 = '0' + gn2;
				if (gn1.size() == gn2.size()) {
					gn1 = '+' + gn1;
					gn2 = '+' + gn2;
					break;
				}
			}
		}
		else if (gn1.size() < gn2.size()) {
			for (int j = 0; j <= gn2.size(); j++) {
				gn1 = '0' + gn1;
				if (gn1.size() == gn2.size()) {
					gn1 = '+' + gn1;
					gn2 = '+' + gn2;
					break;
				}
			}
		}
		else if (gn1.size() == gn2.size()) {
			gn1 = '+' + gn1;
			gn2 = '+' + gn2;
		}
	}


	for (int i = 1; i <= (gn1.length() - 1); i++) {
		gn1.erase(1, i);
		if (i > 0) {
			break;
		}
	}
	for (int i = 1; i <= (gn2.length() - 1); i++) {
		gn2.erase(1, i);
		if (i > 0) {
			break;
		}
	}
}

//Si l'utilisateur ne tape rien avant le premier chiffre, la fonction ajoute un '+' automatiquement.
GNOMBRE saisirGn() {
	GNOMBRE gn;
	getline(cin, gn);
	return gn;
}

//Cette fonction teste si les chaines sont les mêmes.
bool estEgal(GNOMBRE gn1, GNOMBRE gn2) {
	bool egal = false;
	if (gn1 == gn2) {
		egal = true;
	}
	else {
		egal = false;
	}

	return egal;
}

bool estInferieur(GNOMBRE gn1, GNOMBRE gn2) {
	bool estinferieur = false;
	if (gn1[0] == '+' && gn2[0] == '-') {
		estinferieur = false;
	}
	if (gn1[0] == '-' && gn2[0] == '+') {
		estinferieur = true;
	}
	if (gn1.size() > gn2.size() && (gn1[0] == '+') && (gn2[0] == '+')) {
		estinferieur = false;
	}
	if (gn1.size() < gn2.size() && (gn1[0] == '+') && (gn2[0] == '+')) {
		estinferieur = true;
	}
	if (gn1.size() < gn2.size() && (gn1[0] == '-') && (gn2[0] == '-')) {
		estinferieur = false;
	}
	if (gn1.size() > gn2.size() && (gn1[0] == '-') && (gn2[0] == '-')) {
		estinferieur = true;
	}
	if ((gn1[0] == '+') && (gn2[0] == '+')) {
		if (gn1.size() == gn2.size()) {
			int i = 1;
			while (gn1[i] != gn2[i]) {
				i++;
				if (gn1[i] < gn2[i]) {
					estinferieur = true;
				}
				else if (gn1[i] > gn2[i]) {
					estinferieur = false;
				}
			}
		}
	}
	if ((gn1[0] == '+') && (gn2[0] == '+')) {
		if (gn1.size() == gn2.size()) {
			if (gn1[1] > gn2[1]) {
				estinferieur = false;
			}
			else if (gn1[1] < gn2[1]) {
				estinferieur = true;
			}
		}
	}
	if ((gn1[0] == '+') && (gn2[0] == '+')) {
		if (gn1.size() == gn2.size()) {
			int i = 1;
			while ((gn1[i] == gn2[i]) && (estEgal(gn1, gn2) == false)) {
				i++;
				if (gn1[i] > gn2[i]) {
					estinferieur = false;
				}
				if (gn1[i] < gn2[i]) {
					estinferieur = true;
				}
			}
		}
	}
	if ((gn1[0] == '-') && (gn2[0] == '-')) {
		if (gn1.size() == gn2.size()) {
			int i = 1;
			while (gn1[i] != gn2[i]) {
				i++;
				if (gn1[i] > gn2[i]) {
					estinferieur = true;
				}
				else if (gn1[i] < gn2[i]) {
					estinferieur = false;
				}
			}
		}
	}
	if ((gn1[0] == '-') && (gn2[0] == '-')) {
		if (gn1.size() == gn2.size()) {
			if (gn1[1] < gn2[1]) {
				estinferieur = false;
			}
			else if (gn1[1] > gn2[1]) {
				estinferieur = true;
			}
		}
	}
	if ((gn1[0] == '-') && (gn2[0] == '-')) {
		if (gn1.size() == gn2.size()) {
			int i = 1;
			while (gn1[i] == gn2[i]) {
				i++;
				if (gn1[i] < gn2[i]) {
					estinferieur = false;
				}
				if (gn1[i] > gn2[i]) {
					estinferieur = true;
				}
			}
		}
	}
	return estinferieur;

}

bool estInferieurOuEgal(GNOMBRE gn1, GNOMBRE gn2) {
	bool inferieurOuEgal = false;
	if (estInferieur(gn1, gn2) == true) {
		inferieurOuEgal = true;
	}
	if (estEgal(gn1, gn2) == true) {
		inferieurOuEgal = true;
	}
	return inferieurOuEgal;
}

//Cette fonction teste si la chaine GN1 est supérieur à la chaine GN2. 
bool estSuperieur(GNOMBRE gn1, GNOMBRE gn2) {
	bool estsuperieur = false;
	if (gn1[0] == '+' && gn2[0] == '-') {
		estsuperieur = true;
	}
	if (gn1[0] == '-' && gn2[0] == '+') {
		estsuperieur = false;
	}
	if (gn1.size() > gn2.size() && (gn1[0] == '+') && (gn2[0] == '+')) {
		estsuperieur = true;
	}
	if (gn1.size() < gn2.size() && (gn1[0] == '+') && (gn2[0] == '+')) {
		estsuperieur = false;
	}
	if (gn1.size() < gn2.size() && (gn1[0] == '-') && (gn2[0] == '-')) {
		estsuperieur = true;
	}
	if (gn1.size() > gn2.size() && (gn1[0] == '-') && (gn2[0] == '-')) {
		estsuperieur = false;
	}
	if ((gn1[0] == '+') && (gn2[0] == '+')) {
		if (gn1.size() == gn2.size()) {
			int i = 1;
			while (gn1[i] != gn2[i]) {
				i++;
				if (gn1[i] < gn2[i]) {
					estsuperieur = false;
				}
				else if (gn1[i] > gn2[i]) {
					estsuperieur = true;
				}
			}
		}
	}
	if ((gn1[0] == '+') && (gn2[0] == '+')) {
		if (gn1.size() == gn2.size()) {
			if (gn1[1] > gn2[1]) {
				estsuperieur = true;
			}
			else if (gn1[1] < gn2[1]) {
				estsuperieur = false;
			}
		}
	}
	if ((gn1[0] == '+') && (gn2[0] == '+')) {
		if (gn1.size() == gn2.size()) {
			int i = 1;
			while ((gn1[i] == gn2[i]) && (estEgal(gn1, gn2) == false)) {
				i++;
				if (gn1[i] > gn2[i]) {
					estsuperieur = true;
				}
				if (gn1[i] < gn2[i]) {
					estsuperieur = false;
				}
			}
		}
	}
	if ((gn1[0] == '-') && (gn2[0] == '-')) {
		if (gn1.size() == gn2.size()) {
			int i = 1;
			while (gn1[i] != gn2[i]) {
				i++;
				if (gn1[i] > gn2[i]) {
					estsuperieur = false;
				}
				else if (gn1[i] < gn2[i]) {
					estsuperieur = true;
				}
			}
		}
	}
	if ((gn1[0] == '-') && (gn2[0] == '-')) {
		if (gn1.size() == gn2.size()) {
			if (gn1[1] < gn2[1]) {
				estsuperieur = true;
			}
			else if (gn1[1] > gn2[1]) {
				estsuperieur = false;
			}
		}
	}
	if ((gn1[0] == '-') && (gn2[0] == '-')) {
		if (gn1.size() == gn2.size()) {
			int i = 1;
			while (gn1[i] == gn2[i]) {
				i++;
				if (gn1[i] < gn2[i]) {
					estsuperieur = true;
				}
				if (gn1[i] > gn2[i]) {
					estsuperieur = false;
				}
			}
		}
	}
	return estsuperieur;

}

bool estSuperieurOuEgal(GNOMBRE gn1, GNOMBRE gn2) {
	bool superieurOuEgal = false;
	if (estSuperieur(gn1, gn2) == true) {
		superieurOuEgal = true;
	}
	if (estEgal(gn1, gn2) == true) {
		superieurOuEgal = true;
	}
	return superieurOuEgal;
}

GNOMBRE memeTaiile2(GNOMBRE n1, int taille) {
	char s = n1[0];
	n1[0] = '0';
	int limit = n1.size();

	for (int i = 0; i < (taille - limit) - 1; i++) {
		n1 = '0' + n1;
	}

	return s + n1;

}

GNOMBRE soustraction(GNOMBRE gn1, GNOMBRE gn2) {
	GNOMBRE difference;
	bool emprunte = false;

	if (estSuperieurOuEgal(gn1, gn2) == true) {
		for (int i = (gn1.length() - 1); i > 0; i--) {
			if (emprunte == false) {
				temp = (gn1[i] - 48) - (gn2[i] - 48);

			}
			else {
				temp = ((gn1[i] - 48) - 1) - (gn2[i] - 48);
			}
			if (temp < 0) {
				emprunte = true;
				temp = temp + 10;
				if (i == 1) {
					break;
				}
				difference = to_string(temp) + difference;
			}
			else {
				difference = to_string(temp) + difference;
				emprunte = false;
			}

		}
	}

	if (estInferieur(gn1, gn2) == true) {
		emprunte = false;
		difference = "";
		for (int i = (gn2.length() - 1); i > 0; i--) {
			if (emprunte == false) {
				temp = (gn2[i] - 48) - (gn1[i] - 48);

			}
			else {
				temp = ((gn2[i] - 48) - 1) - (gn1[i] - 48);
			}
			if (temp < 0) {
				emprunte = true;
				temp = temp + 10;
				if (i == 1) {
					break;
				}
				difference = to_string(temp) + difference;
			}
			else {
				difference = to_string(temp) + difference;
			}
		}
		difference = '-' + difference;
		for (int i = 1; i <= (difference.length() - 1); i++) {
			if (difference[i] == '0') {
				difference.erase(1, i);
				if (difference[i] != '0') {
					break;
				}
			}


		}
	}

	if (difference[0] == '-') {
		for (int i = 1; i <= (difference.length() - 1); i++) {
			if (difference[i] == '0') {
				difference.erase(1, i);
			}
			else if (difference[i] != '0') {
				break;
			}

		}
	}
	else if (difference[0] != '-') {
		for (int i = 0; i <= (difference.length() - 1); i++) {
			difference.erase(0, i);
			if (difference[i] != '0') {
				break;
			}
		}
	}
	return difference;
}
    

GNOMBRE addition(GNOMBRE n1, GNOMBRE n2) {
	GNOMBRE somme;
	bool reste = false;

	if ((n1[0] != '-') && (n2[0] != '-')) {
		for (int i = (n1.length() - 1); i > 0; i--) {
			if (reste == false) {
				temp = (n1[i] - 48) + (n2[i] - 48);

			}
			else {
				temp = (n1[i] - 48) + (n2[i] - 48) + 1;
			}
			if (temp > 9) {
				reste = true;
				temp = temp - 10;
				somme = to_string(temp) + somme;
			}
			else {

				somme = to_string(temp) + somme;
				reste = false;
			}
		}
		if (reste == true) {
			somme = to_string(1) + somme;
		}
	}


	if ((n1[0] == '-') && (n2[0] == '-')) {
		somme = "";
		reste = false;
		for (int i = (gn1.length() - 1); i > 0; i--) {
			if (reste == false) {
				temp = (n1[i] - 48) + (n2[i] - 48);

			}
			else {
				temp = (n1[i] - 48) + (n2[i] - 48) + 1;
			}
			if (temp > 9) {
				reste = true;
				temp = temp - 10;
				somme = to_string(temp) + somme;
			}
			else {

				somme = to_string(temp) + somme;
				reste = false;
			}
		}
		if (reste == true) {
			somme = to_string(1) + somme;
		}
		somme = '-' + somme;
		for (int i = 1; i <= (somme.length() - 1); i++) {
			if (somme[i] == '0') {
				somme.erase(1, i);
			}
			else if (somme[i] != '0') {
				break;
			}

		}
	}

	if ((n1[0] == '+') && (n2[0] == '-')) {
		somme = "";
		reste = false;
		for (int i = (n1.length() - 1); i > 0; i--) {
			if (reste == false) {
				temp = (n1[i] - 48) - (n2[i] - 48);

			}
			else {
				temp = ((n1[i] - 48) - 1) - (n2[i] - 48);
			}
			if (temp < 0) {
				reste = true;
				temp = temp + 10;
				if (i == 1) {
					break;
				}
				somme = to_string(temp) + somme;
			}
			else {
				somme = to_string(temp) + somme;
			}
		}
		n2[0] = '+';
		if (estInferieur(n1, n2) == true) {
			somme = '-' + somme;
		}


	}
	if (somme[0] == '-') {
		for (int i = 1; i <= (somme.length() - 1); i++) {
			if (somme[i] == '0') {
				somme.erase(1, i);
			}
			else if (somme[i] != '0') {
				break;
			}

		}
	}
	else if (somme[0] != '-') {
		for (int i = 0; i <= (somme.length() - 1); i++) {
			if (somme[i] == '0') {
				somme.erase(0, i);
			}
			else {
				break;
			}

		}
	}
	return somme;
}


GNOMBRE multiplication(GNOMBRE gn1, GNOMBRE gn2) {
	GNOMBRE produit;
	GNOMBRE resultat = "0";
	GNOMBRE zeros = "";
	int reste = 0;
	for (int j = (gn2.length() - 1); j > 0; j--) {
		for (int i = (gn1.length() - 1); i > 0; i--) {
			if (i != 0) {

				temp = ((gn1[i] - 48) * (gn2[j] - 48)) + reste;

				if (temp > 9) {
					reste = temp / 10;
					temp = temp - (reste * 10);
					produit = to_string(temp) + produit;
				}
				else {

					produit = to_string(temp) + produit;
					reste = 0;
				}
			}
		}
		if (reste > 0) {
			produit = to_string(reste) + produit;
			reste = 0;
		}

		produit = produit + zeros;
		resultat = '+' + resultat;
		produit = '+' + produit;
		if (resultat.size() > produit.size()) {
			produit = memeTaiile2(produit, resultat.size());
		}
		else if (resultat.size() < produit.size()) {
			resultat = memeTaiile2(resultat, produit.size());
		}
		resultat = addition(resultat, produit);
		zeros += '0';
		produit = "";
	}

	for (int i = 0; i <= (resultat.length() - 1); i++) {
		if (resultat[i] == '0') {
			resultat.erase(0, i);
		}
		else {
			break;
		}


	}
	if (gn1[0] != gn2[0]) {
		resultat = '-' + resultat;
	}
	return resultat;
}

GNOMBRE div(GNOMBRE gn1, GNOMBRE gn2) {
	GNOMBRE quotient = "";
	GNOMBRE resultat = gn2;
	

		for (int i = 1; estInferieurOuEgal(resultat, gn1); i++) {
			resultat = addition(gn2, resultat);
			memeTaille(gn1, resultat);
			resultat = '+' + resultat;
			quotient = to_string(i);
		}
	return quotient;
}


GNOMBRE minimum(GNOMBRE gn1, GNOMBRE gn2) {
	GNOMBRE minimum;
	if (estInferieur(gn1, gn2) == true) {
		minimum = gn1;
	}
	else if (estInferieur(gn2, gn1) == true) {
		minimum = gn2;
	}
	if (minimum[0] == '-') {
		for (int i = 1; i <= (minimum.length() - 1); i++) {
			if (minimum[i] == '0') {
				minimum.erase(1, i);
			}
			else if (minimum[i] != '0') {
				break;
			}

		}
	}
	else if (minimum[0] == '+') {
		minimum[0] = '0';
		for (int i = 0; i <= (minimum.length() - 1); i++) {
			minimum.erase(0, i);
			if (minimum[i] != '0') {
				break;
			}
		}
	}
	return minimum;
}


void afficherGn() {
	cout << "Somme................  :" << addition(gn1, gn2) << endl;
	cout << "Soustraction................  :" << soustraction(gn1, gn2) << endl;
	cout << "Multiplication................  :" << multiplication(gn1, gn2) << endl;
	cout << "Quotient................  :" << div(gn1, gn2) << endl;
	cout << "Minimum................  :" << minimum(gn1, gn2) << endl;
}

void operation() {
	char choix;
	//Appel de la fonction addition
	if (etat == E1) {
		system("cls");
		cout << "\n--------------------------------------------" << endl;
		cout << "PROJET 1 - GESTION DES GRANDS NOMBRES" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "1) Addition de 2 nombres" << endl;
		cout << "\nDonnez le nombre 1: ";
		gn1 = saisirGn();
		cout << endl;
		cout << "\nDonnez le nombre 2: ";
		gn2 = saisirGn();
		if ((gn1[0] != '+') && (gn1[0] != '-')) {
			gn1 = '+' + gn1;
		}
		if ((gn2[0] != '+') && (gn2[0] != '-')) {
			gn2 = '+' + gn2;
		}
		memeTaille(gn1, gn2);
		if ((gn1[0] == '-') && (gn2[0] == '+')) {
			gn1[0] = '+';
			if (estSuperieur(gn1, gn2) == true) {
				cout << "Somme..................   :  " << " -" << soustraction(gn1, gn2) << endl;
			}
			else if (estInferieur(gn1, gn2) == true) {
				cout << "Somme..................   :  " << soustraction(gn2, gn1) << endl;
			}
			gn1[0] = '-';
		}
		else if ((gn1[0] == '+') && (gn2[0] == '-')) {
			gn2[0] = '+';
			if (estInferieur(gn1, gn2) == true) {
				cout << "Somme..................   :  " << " -" << soustraction(gn2, gn1) << endl;
			}
			if (estSuperieur(gn1, gn2) == true) {
				cout << "Somme..................   :  " << soustraction(gn1, gn2) << endl;
			}
		}
		else {
			cout << "Somme..................   :  " << addition(gn1, gn2) << endl;
		}
		system("pause");
		while (getchar() != '\n'); //Vider le buffer.
		cout << "\nRevenir au menu general? (O/N)"; choix = _getch();
		if (choix == 'O' || choix == 'o') {
			menu();
		}
		if (choix == 'N' || choix == 'n') {
			quitter();
		}
	}
	//Appel de la fonction soustraction
	if (etat == E2) {
		system("cls");
		cout << "\n--------------------------------------------" << endl;
		cout << "PROJET 1 - GESTION DES GRANDS NOMBRES" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "2) Soustraction de 2 nombres" << endl;
		cout << "\nDonnez le nombre 1: ";
		gn1 = saisirGn();
		cout << endl;
		cout << "\nDonnez le nombre 2: ";
		gn2 = saisirGn();
		if ((gn1[0] != '+') && (gn1[0] != '-')) {
			gn1 = '+' + gn1;
		}
		if ((gn2[0] != '+') && (gn2[0] != '-')) {
			gn2 = '+' + gn2;
		}
		memeTaille(gn1, gn2);
		if ((gn1[0] == '-') && (gn2[0] == '-')) {
			gn1[0] = '+';
			gn2[0] = '+';
			if (estInferieur(gn1, gn2) == true) {
				cout << "Difference....................   : " << soustraction(gn2, gn1) << endl;
			}
			else if (estSuperieur(gn1, gn2)) {
				cout << "Difference....................   : " << "-" << soustraction(gn1, gn2) << endl;
			}
			gn1[0] = '-';
			gn2[0] = '-';
		}
		if ((gn1[0] == '-') && (gn2[0] == '+')) {
			gn1[0] = '+';
			cout << "Difference....................   : " << "-" << addition(gn1, gn2) << endl;
			gn1[0] = '-';
		}
		else if ((gn1[0] == '+') && (gn2[0] == '-')) {
			gn2[0] = '+';
			cout << "Difference....................   : " << addition(gn1, gn2) << endl;
			gn2[0] = '-';
		}
		else if ((gn1[0] == '+') && (gn2[0] == '+')) {
			cout << "Difference....................   : " << soustraction(gn1, gn2) << endl;
		}
		system("pause");
		while (getchar() != '\n'); //Vider le buffer.
		cout << "\nRevenir au menu general? (O/N)"; choix = _getch();
		if (choix == 'O' || choix == 'o') {
			menu();
		}
		if (choix == 'N' || choix == 'n') {
			quitter();
		}
	}
	//Appel de la fonction multiplication
	if (etat == E3) {
		system("cls");
		cout << "\n--------------------------------------------" << endl;
		cout << "PROJET 1 - GESTION DES GRANDS NOMBRES" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "3) Multiplication de 2 nombres" << endl;
		cout << "\nDonnez le nombre 1: ";
		gn1 = saisirGn();
		cout << endl;
		cout << "\nDonnez le nombre 2: ";
		gn2 = saisirGn();
		if ((gn1[0] != '+') && (gn1[0] != '-')) {
			gn1 = '+' + gn1;
		}
		if ((gn2[0] != '+') && (gn2[0] != '-')) {
			gn2 = '+' + gn2;
		}
		memeTaille(gn1, gn2);
		cout << "Produit....................   : " << multiplication(gn1, gn2) << endl;
		system("pause");
		while (getchar() != '\n'); //Vider le buffer.
		cout << "\nRevenir au menu general? (O/N)"; choix = _getch();
		if (choix == 'O' || choix == 'o') {
			menu();
		}
		if (choix == 'N' || choix == 'n') {
			quitter();
		}
	}

	if (etat == E4) {
		system("cls");
		cout << "\n--------------------------------------------" << endl;
		cout << "PROJET 1 - GESTION DES GRANDS NOMBRES" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "4) Division de 2 nombres" << endl;
		cout << "\nDonnez le nombre 1: ";
		gn1 = saisirGn();
		cout << endl;
		cout << "\nDonnez le nombre 2: ";
		gn2 = saisirGn();
		if ((gn1[0] != '+') && (gn1[0] != '-')) {
			gn1 = '+' + gn1;
		}
		if ((gn2[0] != '+') && (gn2[0] != '-')) {
			gn2 = '+' + gn2;
		}
		memeTaille(gn1, gn2);
		cout << "Quotient....................   : " << div(gn1, gn2) << endl;
		system("pause");
		while (getchar() != '\n'); //Vider le buffer.
		cout << "\nRevenir au menu general? (O/N)"; choix = _getch();
		if (choix == 'O' || choix == 'o') {
			menu();
		}
		if (choix == 'N' || choix == 'n') {
			quitter();
		}
	}
	if (etat == 5) {
		system("cls");
		cout << "\n--------------------------------------------" << endl;
		cout << "PROJET 1 - GESTION DES GRANDS NOMBRES" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "5) Minimum de 2 nombres" << endl;
		cout << "\nDonnez le nombre 1: ";
		gn1 = saisirGn();
		cout << endl;
		cout << "\nDonnez le nombre 2: ";
		gn2 = saisirGn();
		if ((gn1[0] != '+') && (gn1[0] != '-')) {
			gn1 = '+' + gn1;

		}
		if ((gn2[0] != '+') && (gn2[0] != '-')) {
			gn2 = '+' + gn2;
		}
		memeTaille(gn1, gn2);
		cout << minimum(gn1, gn2) << endl;
		system("pause");
		while (getchar() != '\n'); //Vider le buffer.
		cout << "\nRevenir au menu general? (O/N)"; choix = _getch();
		if (choix == 'O' || choix == 'o') {
			menu();
		}
		if (choix == 'N' || choix == 'n') {
			quitter();
		}
	}
	if (etat == E6) {
		{
			system("cls");
			cout << "\nPROJET 1 - GESTION DES GRANDS NOMBRES";
			cout << "\n--------------------------------------------";
			cout << "\n   6) La somme, le produit et la moyenne de 10 nombres" << endl;
			cout << "\n      Bien vouloir attendre la version d'hivers 2020 du Logiciel" << endl;
			cout << "\n\n--------------------------------------------";
			cout << "\nRevenir au menu general? (O/N)"; choix = _getch();
			if (choix == 'O' || choix == 'o') {
				menu();
			}
			if (choix == 'N' || choix == 'n') {
				quitter();
			}
		}
	}
	if (etat == E7) {
		{
			system("cls");
			cout << "\nPROJET 1 - GESTION DES GRANDS NOMBRES";
			cout << "\n--------------------------------------------";
			cout << "\n   7) Tri par ordre croissant de 10 nombres" << endl;
			cout << "\n      Bien vouloir attendre la version d'hivers 2020 du Logiciel" << endl;
			cout << "\n\n--------------------------------------------";
			cout << "\nRevenir au menu general? (O/N)"; choix = _getch();
			if (choix == 'O' || choix == 'o') {
				menu();
			}
			if (choix == 'N' || choix == 'n') {
				quitter();
			}
		}
	}
	if (etat == E8) {
		{
			system("cls");
			cout << "\nPROJET 1 - GESTION DES GRANDS NOMBRES";
			cout << "\n--------------------------------------------";
			cout << "\n   8) Calculatrice expression terminee par << = >>" << endl;
			cout << "\n      Bien vouloir attendre la version d'hivers 2020 du Logiciel" << endl;
			cout << "\n\n--------------------------------------------";
			cout << "\nRevenir au menu general? (O/N)"; choix = _getch();
			if (choix == 'O' || choix == 'o') {
				menu();
			}
			if (choix == 'N' || choix == 'n') {
				quitter();
			}
		}
	}
}

int main() {
	system("CLS");
	GNOMBRE gn;
	etat = E0;
	do {
		switch (etat) {
		case E0: menu(); break; //Le programme commence dans le menu principal.
		case E1: operation(); break;
		case E2: operation(); break;
		case E3: operation(); break;
		case E4: operation(); break;
		case E5: operation(); break;
		case E6: operation(); break;
		case E7: operation(); break;
		case E8: operation(); break;
		case E9: quitter(); break;
		}
	} while (etat != E10);
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.

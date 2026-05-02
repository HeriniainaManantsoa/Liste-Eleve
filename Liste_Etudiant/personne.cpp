#include <iostream>
#include "personne.h"
#include "others.h"

using namespace std;

Personne::Personne () {}

void Personne::setNom (string nom) {
    this->nom = Outils::ignoreSpace(nom);
}

void Personne::setPrenomList (string prenomChaine) {
    int n = prenomChaine.length();
    vector<string> prenomList;
    string prenom;
    for (int i(1);i < n;i++) {
        if (!Outils::isSpace(prenomChaine[i-1])) {
            prenom.push_back(prenomChaine[i-1]);
        }
        else if (Outils::isSpace(prenomChaine[i-1]) && !Outils::isSpace(prenomChaine[i])) {
            prenomList.push_back(prenom);
            prenom.clear();
        }
        if (i == n - 1 && !Outils::isSpace(prenomChaine[i])) {
            prenom.push_back(prenomChaine[i]);
            prenomList.push_back(prenom);
            prenom.clear();
        }
    }
    this->prenomList = prenomList;
}

void Personne::setAge (int age) {
    this->age = age;
}

string Personne::getNom () {
    return nom;
}

vector<string> Personne::getPrenomList () {
    return prenomList;
}

string Personne::getFullPrenom () {
    string fullPrenom(prenomList[0]);
    int n = prenomList.size();
    for (int i(1);i < n;i++) {
        fullPrenom = fullPrenom + " " + prenomList[i];
    }
    return fullPrenom;
}

int Personne::getAge () {
    return age;
}

void Personne::printPersonne () {
    cout << "nom : " << nom << endl;
    cout << "prenom : ";
    int n = prenomList.size();
    for (int i(0);i < n;i++) {
        cout << prenomList[i] << " ";
    }
    cout << endl;
    cout << "age : " << age << endl;
}



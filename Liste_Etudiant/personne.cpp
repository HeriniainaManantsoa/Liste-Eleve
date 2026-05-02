#include <iostream>
#include "personne.h"

using namespace std;

Personne::Personne () {}

void Personne::setNom (string nom) {
    this->nom = this->ignoreSpace(nom);
}

void Personne::setPrenom (string prenom) {
    this->prenom = prenom;
}

void Personne::setAge (int age) {
    this->age = age;
}

string Personne::getNom () {
    return nom;
}

string Personne::getPrenom () {
    return prenom;
}

int Personne::getAge () {
    return age;
}

void Personne::printPersonne () {
    cout << "nom : " << nom << endl;
    cout << "prenom : " << prenom << endl;
    cout << "age : " << age << endl;
}

string Personne::ignoreSpace(string chaine) {
    string chaineSansSpace;
    int n = chaine.length();
    for (int i(0);i < n;i++) {
        if (chaine[i] == ' ' || chaine[i] == '\t') {
            break;
        }
        chaineSansSpace.push_back(chaine[i]);
    }
    return chaineSansSpace;
}


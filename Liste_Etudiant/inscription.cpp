#include "inscription.h"
#include "others.h"
#include <iostream>
#include <fstream>
#include <QStringList>

using namespace std;

Inscription::Inscription () {}

void Inscription::inscrire (QListWidget *list,Personne p) {
    listePersonne.push_back(p);
    string nom = p.getNom();
    string fullPrenom = p.getFullPrenom();
    string line;
    line = nom + " " + fullPrenom;
    QString lineQString = QString::fromStdString(line);
    list->addItem(lineQString);
}

void Inscription::desabonner (QListWidget *list,Personne p) {
    vector<Personne>::iterator pDelete = findPersonne(p);
    if (pDelete != listePersonne.end()) {
        listePersonne.erase(pDelete);
        list->clear();
        Initialise(list);
    }
}

vector<Personne>::iterator Inscription::findPersonne (Personne p) {
    vector<Personne>::iterator it;
    for (it = listePersonne.begin();it != listePersonne.end();it++) {
        if (it->getNom() == p.getNom()) {
            if (it->getFullPrenom() == p.getFullPrenom()) {
                return it;
            }
        }
    }
    return listePersonne.end();
}

Personne Inscription::findPersonne(int index) {
    int n = listePersonne.size();
    if (index >= n || index < 0) {
        cout << "cetter personne n'existe pas" << endl;
        exit(1);
    }
    return listePersonne[index];
}

std::vector<Personne>::iterator Inscription::getListEnd() {
    return listePersonne.end();
}

void Inscription::printListe () {
    int n = listePersonne.size();
    for (int i(0);i < n;i++) {
        listePersonne[i].printPersonne();
    }
}

void Inscription::setSaveFile (string saveFile) {
    this->saveFile = saveFile;
}

void Inscription::saveList () {
    ofstream saveFile(this->saveFile.c_str());
    string line;
    int n = this->listePersonne.size();
    for (int i(0);i < n;i++) {
        saveFile << this->listePersonne[i].getNom();
        saveFile << ":" << this->listePersonne[i].getFullPrenom();
        saveFile << ":" << this->listePersonne[i].getAge();
        saveFile << ":" << this->listePersonne[i].getNiveau();
        saveFile << ":" << this->listePersonne[i].getMention() << endl;
    }
    saveFile.close();
}

Personne Inscription::restoreEleve (string chaine) {
    Personne p;
    p.setNom(Outils::getChamp(chaine,':',1));
    p.setPrenomList(Outils::getChamp(chaine,':',2));
    int age = stoi(Outils::getChamp(chaine,':',3));
    p.setAge(age);
    p.setNiveau(Outils::getChamp(chaine,':',4));
    p.setMention(Outils::getChamp(chaine,':',5));
    return p;
}

void Inscription::restoreList (QListWidget *list) {
    ifstream saveFile(this->saveFile.c_str());
    string line;
    while (getline(saveFile,line)) {
        Personne p;
        p = restoreEleve(line);
        this->inscrire(list,p);
        cout << line << endl;
    }
}

void Inscription::Initialise (QListWidget *list) {
    int n = this->listePersonne.size();
    for (int i(0);i < n;i++) {
        string nom = this->listePersonne[i].getNom();
        string prenom = this->listePersonne[i].getFullPrenom();
        string line;
        line = nom + " " + prenom;
        QString lineQString = QString::fromStdString(line);
        list->addItem(lineQString);
    }
}








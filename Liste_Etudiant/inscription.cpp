#include "inscription.h"
#include <fstream>
#include <QStringList>

using namespace std;

Inscription::Inscription () {}

void Inscription::inscrire (QListWidget *list,Personne p) {
    listePersonne.push_back(p);
    string nom = p.getNom();
    string prenom = p.getPrenom();
    string line;
    line = nom + " " + prenom;
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
            if (it->getPrenom() == p.getPrenom()) {
                return it;
            }
        }
    }
    return listePersonne.end();
}

Personne Inscription::findPersonne(int index) {
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
        saveFile << this->listePersonne[i].getPrenom();
        saveFile << this->listePersonne[i].getAge() << endl;
    }
}

void Inscription::Initialise (QListWidget *list) {
    int n = this->listePersonne.size();
    for (int i(0);i < n;i++) {
        string nom = this->listePersonne[i].getNom();
        string prenom = this->listePersonne[i].getPrenom();
        string line;
        line = nom + " " + prenom;
        QString lineQString = QString::fromStdString(line);
        list->addItem(lineQString);
    }
}








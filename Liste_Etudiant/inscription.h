#ifndef INSCRIPTION_H
#define INSCRIPTION_H
#include <string>
#include <vector>
#include <QListWidget>
#include "personne.h"

class Inscription {
private:
    std::vector<Personne> listePersonne;
    std::string saveFile;
public:
    Inscription();
    void inscrire (QListWidget *list,Personne p);
    void desabonner (QListWidget *list,Personne p);
    std::vector<Personne>::iterator findPersonne (Personne p);
    Personne findPersonne(int index);
    std::vector<Personne>::iterator getListEnd();
    void printListe ();
    void setSaveFile (std::string saveFile);
    void getListSaved ();
    void saveList ();
    void Initialise(QListWidget *list);
    //std::vector<Personne>::iterator findPersonne (std::vector<Personne>::iterator p);
};

#endif // INSCRIPTION_H

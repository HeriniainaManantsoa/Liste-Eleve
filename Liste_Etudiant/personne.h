#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>
#include <vector>

class Personne {
private:
    std::string nom;
    std::vector<std::string> prenomList;
    int age;
public:
    Personne();
    void setNom (std::string nom);
    void setPrenomList (std::string prenoms);
    void setAge (int age);
    std::string getNom ();
    std::vector<std::string> getPrenomList ();
    std::string getFullPrenom ();
    int getAge ();
    void printPersonne ();
};

#endif // PERSONNE_H
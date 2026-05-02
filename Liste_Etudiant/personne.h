#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>
#include <vector>

class Personne {
private:
    std::string nom;
    std::vector<std::string> prenomList;
    int age;
    std::string niveau;
    std::string mention;
public:
    Personne();
    void setNom (std::string nom);
    void setPrenomList (std::string prenoms);
    void setAge (int age);
    void setNiveau (std::string niveau);
    void setMention (std::string mention);
    void creerEleve (std::string nom,std::string prenoms,int age,std::string niveau,std::string mention);
    std::string getNom ();
    std::vector<std::string> getPrenomList ();
    std::string getFullPrenom ();
    int getAge ();
    std::string getNiveau ();
    std::string getMention ();
    void printPersonne ();
};

#endif // PERSONNE_H
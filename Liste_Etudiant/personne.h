#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>

class Personne {
private:
    std::string nom;
    std::string prenom;
    int age;
public:
    Personne();
    void setNom (std::string nom);
    void setPrenom (std::string prenom);
    void setAge (int age);
    std::string getNom ();
    std::string getPrenom ();
    int getAge ();
    void printPersonne ();
    std::string ignoreSpace(std::string chainer);
};

#endif // PERSONNE_H
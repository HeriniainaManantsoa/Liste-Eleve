#include "others.h"
#include <string>

using namespace std;

bool Outils::isSpace (char x) {
    if (x == ' ' || x == '\t')
        return true;

    return false;
}

string Outils::ignoreSpace(string chaine) {
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

string Outils::getChamp(string chaine, char separator,int index) {
    string champ("");
    int compteur(0);
    int n = chaine.length();
    for (int i(0);i < n;i++) {
        if (chaine[i] == separator) {
            compteur++;
            if (compteur == index) {
                return champ;
            }
            champ.clear();
        }
        else {
            champ.push_back(chaine[i]);
        }
    }
    if (index == compteur + 1) {
        return champ;
    }
    return champ;
}










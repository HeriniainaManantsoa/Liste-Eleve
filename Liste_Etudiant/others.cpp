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

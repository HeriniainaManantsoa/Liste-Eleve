#include "others.h"
#include <string>
#include <vector>

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
            continue;
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

bool Outils::isLetter (char x) {
    char a = 'a';
    char A = 'A';
    for (int i(0);i < 26;i++) {
        if (x == a + i ||x == A + i) {
            return true;
        }
    }
    return false;
}

bool Outils::isNameCorrect (string name) {
    name = ignoreSpace(name);
    int n = name.length();
    if (n < 2) {
        return false;
    }
    for (int i(0);i < n;i++) {
        if (!isLetter(name[i])) {
            return false;
        }
    }
    return true;
}

bool Outils::isDigit (char x) {
    string digits("0123456789");
    int n = digits.length();
    for (int i(0);i < n;i++) {
        if (x == digits[i]) {
            return true;
        }
    }
    return false;
}

bool Outils::isAgeCorrect (string age) {
    int n = age.length();
    for (int i(0);i < n;i++) {
        if (!isDigit(age[i])) {
            return false;
        }
    }
    return true;
}

bool Outils::isNiveauCorrect (string niveau) {
    niveau = ignoreSpace(niveau);
    vector<string> niveauList = {"l1","l2","l3","m1","m2","L1","L2","L3","M1","M2"};
    int n = niveauList.size();
    for (int i(0);i < n;i++) {
        if (niveau == niveauList[i]) {
            return true;
        }
    }
    return false;
}

bool Outils::isMentionCorrect (std::string mention) {
    mention = ignoreSpace(mention);
    vector<string> mentionList = {"math","mathematique","mathematique informatique","math info"
                                  ,"physique","chimie"
                                  ,"it","informatique","informatique et technologie","info"
                                  ,"svt","science de la vie et de la terre"};
    int n = mentionList.size();
    int mentionLength = mention.length();
    for (int i(0);i < n;i++) {
        int m = mentionList[i].length();
        if (m != mentionLength) {
            continue;
        }
        for (int j(0);j < m;j++) {
            if (!isSameLetter(mention[j],mentionList[i][j])) {
                break;
            }
            if (j == m - 1) {
                return true;
            }
        }
    }
    return false;
}

bool Outils::isSameLetter (char x1,char x2) {
    int diffMinMaj = 'A' - 'a';
    if (x1 == x2 || x1 == x2 + diffMinMaj || x1 == x2 - diffMinMaj) {
        return true;
    }
    return false;
}








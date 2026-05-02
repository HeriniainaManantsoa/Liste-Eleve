#ifndef OTHERS_H
#define OTHERS_H
#include <string>

namespace Outils {
    bool isSpace (char x);
    std::string ignoreSpace (std::string chaine);
    std::string getChamp (std::string chaine, char separator,int index);
    bool isLetter (char x);
    bool isNameCorrect (std::string name);
    bool isDigit (char x);
    bool isAgeCorrect (std::string age);
}

#endif // OTHERS_H

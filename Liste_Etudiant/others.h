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
    bool isNiveauCorrect (std::string niveau);
    bool isMentionCorrect (std::string mention);
    bool isSameLetter (char x1,char x2);
    }

#endif // OTHERS_H

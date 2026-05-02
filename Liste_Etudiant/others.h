#ifndef OTHERS_H
#define OTHERS_H
#include <string>

namespace Outils {
    bool isSpace (char x);
    std::string ignoreSpace (std::string chaine);
    std::string getChamp (std::string chaine, char separator,int index);
}

#endif // OTHERS_H

#include <iostream>
#include <sstream>

#include "menu.h"

enum GebTyp {typ1, typ2, typ3};

int main(int argc, char** argv) {
    if (argc != 3) {
        std::cerr << "Falsche Anzahl an Argumenten. Richtige Nutzung: ./capycity Hoehe Breite." << std::endl;
        return 1;
    }

    std::istringstream ss1(argv[1]);
    std::istringstream ss2(argv[2]);
    int height, width;
    if(!(ss1 >> height) || !(ss2 >> width)) {
        std::cerr << "Keine (gueltige) Zahl. Gib eine natuerliche Zahl an." << std::endl;
        return 1;
    } else {
        GebTyp bau_flaeche[height][width] = {};
        menu();
    }
    return 0;
}

#include<iostream>
#include<limits>

#include "menu.h"

int menu() {
    while(1) {
        std::cout << "Waehle Option aus" << std::endl
            << "[1]: Gebaeude setzen" << std::endl
            << "[2]: Bereich loeschen" << std::endl
            << "[3]: Bauplan ausgeben" << std::endl
            << "[0]: Beenden" << std::endl;
        int option;
        std::cin >> option;
        if(!std::cin.good() || option > 3 || option < 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Ungueltige Eingabe" << std::endl;
        } else {
            switch(option) {
                case 0: std::cout << "Wird beendet" << std::endl; return 0;
                case 1: std::cout << ""; break;
                case 2: std::cout << ""; break;
                case 3: std::cout << ""; break;
            }
        }
    }
}

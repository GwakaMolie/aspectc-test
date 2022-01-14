#include <iostream>
#include "Etudiant.h"

int main()
{
    std::vector<Module> listMod1 = {
        Module("Physic", 10, 3, 3),
        Module("Math", 10, 17, 3),
        Module("Science", 10, 0, 3),
        Module("Literature", 10, 10, 2),
    };
    std::vector<Module> listMod2 = {
        Module("Physic", 14, 16, 3),
        Module("Math", 14, 14, 3),
        Module("Science", 12, 10, 3),
        Module("art", 14, 11, 2),
    };
    Etudiant e1("Alan Turing", "Masters", listMod1);
    Etudiant e2("Ada Lovelace", "2ed Year", listMod2);

    e1.ecrireReleve();
    e2.ecrireReleve();
}
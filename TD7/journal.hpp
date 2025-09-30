#ifndef JOURNAL_HPP
#define JOURNAL_HPP

#include <iostream>
#include <string>
#include "entree.hpp"

using namespace std;

struct Journal {
    Entree *entrees;
    unsigned capacite;
    unsigned nb_entrees;

    // Constructeur
    Journal(){
        capacite = 10;
        nb_entrees = 0;
        entrees = new Entree[capacite];
    }

    ~Journal(){
        delete[] entrees;
    }

    void nouvelle_entree(string nom, string txt){
        if(nb_entrees >= capacite)
        {
            capacite = capacite *2;
            Entree *newEntrees = new Entree[capacite];
            for(int i = 0; i < nb_entrees; i++)
            {
                newEntrees[i] = entrees[i];
            }
            delete[] entrees;
            entrees = newEntrees;
        }
        entrees[nb_entrees] = Entree(nom, txt);
        nb_entrees++;
    }

    void afficher(){
        for(int i = 0; i < nb_entrees; i++)
        {
            cout << (i+1) << ". ";
            entrees[i].afficher();
        }
    }
};

#endif
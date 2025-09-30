#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <iostream>
#include <string>
#include "journal.hpp"

using namespace std;

struct Personne
{
    string nom;
    string prenom;
    Journal* mon_journal;

    // Constructeur par défaut
    Personne() = default;
    
    // Constructeur avec paramètres
    Personne(string n, string p, Journal* j) : nom(n), prenom(p), mon_journal(j) {}
    
    // Méthode pour initialiser (si on veut garder cette approche)
    void initialiser(string n, string p, Journal* j)
    {
        nom = n;
        prenom = p;
        mon_journal = j;
    }
    
    void ajouter_entree(string txt)
    {
        string nom_complet = nom + " " + prenom;
        mon_journal->nouvelle_entree(nom_complet, txt);
    }
};

#endif
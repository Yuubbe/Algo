#ifndef ENTREE_HPP
#define ENTREE_HPP

#include <iostream>
#include <string>

using namespace std;

struct Entree
{
    string nom_personne;
    string texte;

    // Constructeur par défaut
    Entree() = default;
    
    // Constructeur avec paramètres
    Entree(string nom, string txt) : nom_personne(nom), texte(txt) {}
    
    // Méthode pour initialiser (si on veut garder cette approche)
    void initialiser(string nom, string txt)
    {
        nom_personne = nom;
        texte = txt;
    }

    void afficher(){
        cout << nom_personne << " : " << texte << endl;
    }
};

#endif

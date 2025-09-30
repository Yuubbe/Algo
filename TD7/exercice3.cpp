#include <iostream>
#include "personne.hpp"

using namespace std;

int main()
{
    Journal j;

Personne p1("Dupont", "Alice", &j);
    Personne p2("Martin", "Bob", &j);

    p1.ajouter_entree("Bonjour, ceci est ma première entrée.");
    p2.ajouter_entree("Je réponds à Alice avec une autre entrée.");
    p1.ajouter_entree("Encore un message.");
    cout << "Contenu du journal :" << endl;
    j.afficher();

    return 0;
}
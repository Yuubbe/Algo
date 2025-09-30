#include <iostream>

using namespace std;


struct tableau_dynamique
{
    int *tab=nullptr;
    unsigned capacite=0;
    unsigned taille = 0;

    void ajouter(tableau_dynamique &t, int x)
{
    if(t.taille == t.capacite)
    {
        capacite = 2*(capacite + 1);
        int *tmp = new int[capacite];
        for(unsigned i = 0; i < t.taille; i++)
        {
            tmp[i] = t.tab[i];
        }
        delete[] t.tab;
        t.tab = tmp;
    }

    t.tab[t.taille] = x;
    t.taille = t.taille + 1;
}


void afficher(){
    if(tab!=nullptr)
    {
        for(int i = 0; i < taille; i++)
        {
            cout << tab[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Le tableau est vide." << endl;
    }
}
};

int main()
{
    tableau_dynamique t;
    t.capacite = 2;
    t.tab = new int[t.capacite];

    t.ajouter(t, 5);
    t.ajouter(t, 10);
    t.ajouter(t, 15);
    t.ajouter(t, 55);
    t.ajouter(t, 20);


    t.afficher();

    delete[] t.tab; // Libération de la mémoire allouée
    return 0;
}

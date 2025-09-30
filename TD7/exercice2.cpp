#include <iostream>
#include "tabdynamique.hpp"


using namespace std;


unsigned taille(const TabDyn &t)
{
    return t.nb;
}
bool supprimer(TabDyn &t, int x)
{
    for(int i = 0; i < t.nb; i++)
    {
        if(t.donnees[i]== x)
        {
            for(int j = i; j < t.nb - 2 ; j ++)
            {
                t.donnees[j] = t.donnees[j+1];
            }
            t.nb = t.nb - 1;
            return true;
        }

    }
    return false;
}
void effacer(TabDyn &t)
{
    t.nb = 0;
}

void ajouter(TabDyn &t, int x)
{
    if(t.nb < t.cap)
    {
        t.donnees[t.nb] = x;
        t.nb = t.nb + 1;
    }

    else
    {
        int *newDonnees = new int[t.cap * 2];
        for(int i = 0; i < t.nb; i++)
        {
            newDonnees[i] = t.donnees[i];
        }
        delete[] t.donnees;
        t.donnees = newDonnees;
        t.cap = t.cap * 2;
        t.donnees[t.nb] = x;
        t.nb = t.nb + 1;
    }
}

void afficher(const TabDyn &t)
{
    for(int i = 0; i < t.nb; i++)
    {
        cout << t.donnees[i] << " ";
    }
    cout << endl;
}


int main()
{
    TabDyn t;
    t.cap = 2;
    t.nb = 0;
    t.donnees = new int[t.cap];

    ajouter(t, 5);
    ajouter(t, 10);
    ajouter(t, 15);
    ajouter(t, 20);
    afficher(t);
    cout << "Taille : " << taille(t) << endl;

    supprimer(t, 10);
    afficher(t);
    cout << "Taille : " << taille(t) << endl;

    effacer(t);
    afficher(t);
    cout << "Taille : " << taille(t) << endl;

    delete[] t.donnees;
}

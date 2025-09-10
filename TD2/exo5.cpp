#include <iostream>

using namespace std;


typedef bool Grille[49];

typedef unsigned Tirage[7];

void initialiser(Grille g)
{
    for(int i = 0; i < 49; i++)
    {
        g[i] = false;
    }
}

bool nombre_valide(const Grille g){
    int cpt = 0;
    for(int i = 0; i < 49; i++)
    {
        if(g[i] == true)
        {
            cpt++;
        }
    }
    if(cpt == 7)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool tirage_valide(const Tirage t){
    for(int i = 0; i < 6 ; i++)
    {
        for(int j = i+1; j < 6; j++)
        {
            if(t[i] == t[j])
            {
                return false;
            }
        }
    }
    return true;
}


unsigned calculer_gain(const Grille g, const Tirage t){
    unsigned bon_numéros = 0;
    for (int i = 0; i < 7; i++)
    {
        if(g[t[i]-1] == true)
        {
            bon_numéros++;
        }

    }
    int gain = 0;
    if(bon_numéros ==3){
        gain =10;
    }
    else if(bon_numéros ==4){
        gain =100;
    }
    else if(bon_numéros ==5){
        gain =10000;
    }
    else if(bon_numéros ==6){
        gain =1000000;
    }
    else if(bon_numéros ==7){
        gain =10000000;
    }
    if(gain > 0 && g[t[6]-1] == true){
        gain = gain * 2;
    }
    return gain;
}

void jouer_loto()
{
    Grille g;
    initialiser(g);
    int numero;
    cout << "Entrez vos 7 numéros (entre 1 et 49) : " << endl;
    int cpt = 0;
    while (cpt < 7)
    {
        cin >> numero;
        if (numero < 1 || numero > 49)
        {
            cout << "Numéro invalide, recommencez." << endl;
            continue;
        }
        if (g[numero - 1])
        {
            cout << "Numéro déjà coché, recommencez." << endl;
            continue;
        }
        g[numero - 1] = true;
        cpt++;
    }

    if (!nombre_valide(g))
    {
        cout << "Grille invalide" << endl;
        return;
    }


    Tirage t;
    int tirage_cpt = 0;
    while (tirage_cpt < 7)
    {
        int tirage_num = rand() % 49 + 1;
        bool deja_tire = false;
        for (int j = 0; j < tirage_cpt; j++)
        {
            if (t[j] == tirage_num)
            {
                deja_tire = true;
                break;
            }
        }
        if (!deja_tire)
        {
            t[tirage_cpt] = tirage_num;
            tirage_cpt++;
        }
    }

    if (!tirage_valide(t))
    {
        cout << "Tirage invalide" << endl;
        return;
    }

    cout << "Numéros gagnants : ";
    for (int i = 0; i < 6; i++)
    {
        cout << t[i] << " ";
    }
    cout << endl;
    cout << "Numéro complémentaire : " << t[6] << endl;

    unsigned gain = calculer_gain(g, t);
    cout << "Gain : " << gain << endl;
}


int main()
{

    jouer_loto();
    return 0;
}
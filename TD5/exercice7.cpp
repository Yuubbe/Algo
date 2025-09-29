#include <iostream>

using namespace std;

int nb_chiffres(int n)
{
    if(n<10)
    {
        return 1;
    }
    else{
        return 1 + nb_chiffres(n/10);
    }

}

int main()
{
    int n;
    cout << "Entrez un entier n : ";
    cin >> n;
    if(n < 0)
    {
        cout << "Erreur : n doit être positif" << endl;
        return 1;
    }
    cout << "Le nombre de chiffres de " << n << " est : " << nb_chiffres(n) << endl;
    return 0;
}
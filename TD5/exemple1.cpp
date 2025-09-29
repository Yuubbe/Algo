#include <iostream>

using namespace std;

unsigned somme_n_entiers(unsigned n)
{
  

    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return n + somme_n_entiers(n - 1);
    }
}

// correction

/*int somme(int n)
{
    if (n == 0)
        return 0;
    else
        return n + somme(n - 1);
}*/
 /* 
 
 
 
 */

int main()
{
    unsigned n;
    cout << "Entrez un entier positif : " << endl;
    cin >> n;
    unsigned resultat = somme_n_entiers(n);
    cout << "La somme des " << n << " premiers entiers est : " << resultat << endl;
    return 0;
}
#include <iostream>

using namespace std;


bool est_premier(int x)
{
    if (x < 2)
    {
        return false;
    }
    for(int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}


int somme_premier(unsigned n)
{
    int somme =0;
    for(int i=2; i <= n; i++)
    {
        if (est_premier(i))
        {
            somme += i;
        }
    }
    return somme;
}

int main()
{
    somme_premier(10);
    cout << somme_premier(10) << endl;
    somme_premier(20);
    cout << somme_premier(20) << endl;
    somme_premier(30);
    cout << somme_premier(30) << endl;
    return 0;
}

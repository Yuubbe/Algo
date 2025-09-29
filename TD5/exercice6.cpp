#include <iostream>

using namespace std;


unsigned recursive_somme(int T [], int n )
{
    if (n == 0)
    { 
        return 0;
    }
    else{
        return T[n-1] + recursive_somme(T, n-1);
    }
}

unsigned recursive_max(int T[], int n)
{
    if(n == 1)
    {
        return T[0];
    }
    else
    {
        unsigned max_rest = recursive_max(T, n-1);
        if(T[n-1] > max_rest)
        {
            return T[n-1];
        }
        else
        {
            return max_rest;
        }
    }
}

int main()
{
    int n;
    cout << "Entrez la taille du tableau : ";
    cin >> n;
    int T[n];
    cout << "Entrez les éléments du tableau : ";
    for(int i = 0; i < n; i++)
    {
        cin >> T[i];
    }
    cout << "La somme des éléments du tableau est : " << recursive_somme(T, n) << endl;
    cout << "Le maximum des éléments du tableau est : " << recursive_max(T, n) << endl;
    return 0;
}
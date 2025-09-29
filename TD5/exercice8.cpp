#include <iostream>

using namespace std;

bool rech(int T[], int n, int x)
{
    if(n==0)
    {
        return false;

    }
    else if(T[n-1] == x)
    {
        return true;
    }
    else
    {
        return rech(T, n-1, x);
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
    int x;
    cout << "Entrez un entier x à rechercher dans le tableau : ";
    cin >> x;
    if(rech(T, n, x))
    {
        cout << x << " est présent dans le tableau." << endl;
    }
    else
    {
        cout << x << " n'est pas présent dans le tableau." << endl;
    }
    return 0;
}
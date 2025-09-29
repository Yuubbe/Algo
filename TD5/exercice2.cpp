#include <iostream>

using namespace std;

double puissance(int x, int n){
    if(n == 0)
    {
        return 1;
    }
    else if ( n > 0)
    {
        return x * puissance(x, n-1);
    }
    else if (x == 0)
    {
        cout << "Erreur : division par zéro" << endl;
        return 0;
    }
    else
    {
        return 1 / puissance(x, -n);
    }
    
}

int main()
{
    int x;
    int n;
    cout << "Entrez un entier x : ";
    cin >> x;
    cout << "Entrez un entier n : ";
    cin >> n;
    cout << x << "^" << n << " = " << puissance(x, n) << endl;
    return 0;
}
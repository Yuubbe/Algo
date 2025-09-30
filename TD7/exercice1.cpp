#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    cout << "avant  x = " << x << endl;
    int *p = &x;
    x = *p * 3;

    cout << "après x = " << x << endl;
    // L'opérateur * permet d'accéder à la valeur pointée par le pointeur p, ici x.
}

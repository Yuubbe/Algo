#include <iostream>

using namespace std;


int u(int n)
{
    if(n == 0)
    {
        return 2;
    }
    else
    {
        return 3 * u(n-1)+1;
    }
}

int main()
{
    int n;
    cout << "Entrez un entier n : ";
    cin >> n;
    cout << "u(" << n << ") = " << u(n) << endl;
    return 0;
}



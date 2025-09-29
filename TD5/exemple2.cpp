#include <iostream>

using namespace std;


unsigned pgcd(unsigned a, unsigned b)
{
    if (b == 0)
        return a;
    if(a>b) return pgcd(a-b, b);
    else
        return pgcd(b, a % b);
}
int main()
{
    unsigned a, b;
    cout << "Entrez deux entiers positifs : " << endl;
    cin >> a >> b;
    cout << "Le pgcd est : " << pgcd(a, b) << endl;
    return 0;
}
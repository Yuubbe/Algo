#include <iostream>

using namespace std;

unsigned hanoi(int n, char source, char cible, char intermediare)
{
    if(n ==1)
    {
        cout << "Déplacer le disque 1 de " << source << " vers " << cible << endl;
    }
    else
    {
        hanoi(n-1, source, intermediare, cible);
        cout << "Déplacer le disque " << n << " de " << source << " vers " << cible << endl;
        hanoi(n-1, intermediare, cible, source);
    }
    return 0;
}


int main()
{
    int n;
    cout << "Entrez le nombre de disques : ";
    cin >> n;
    hanoi(n, 'A', 'C', 'B');
    cout << "nombre de déplacements : " << (1<<n) - 1 << endl;
    return 0;
}
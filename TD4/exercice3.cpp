#include <iostream>
#include <string>
using namespace std;

string inverser_chaine()
{
    string chaine;
    cout << "Entrez une chaîne de caractères  : " << endl;
    getline(cin, chaine);
    int n = chaine.length();
    string swap_chaine(n, ' ');
    for (int i = 0 ; i < n; i++)
    {
        swap_chaine[i] = chaine[n-1-i];
    }
    return swap_chaine;
}

int main()
{
    string resultat = inverser_chaine();
    cout << resultat << endl;
    return 0;
}
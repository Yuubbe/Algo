#include <iostream>
#include <string>
using namespace std;

void analyser_chaine()
{
    string s;
    int nb_lettres = 0;
    int nb_chiffres = 0;
    int nb_espaces = 0;
    int nb_speciaux = 0;
    int i = 0;

    cout << "Entrez une chaîne de caractères  : " << endl;
    getline(cin, s);
    while(s[i] != '\0')
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            nb_lettres++;
        }
        else if(s[i] >= '0' && s[i] <= '9')
        {
            nb_chiffres++;
        }
        else if(s[i] == ' ')
        {
            nb_espaces++;
        }
        else
        {
            nb_speciaux++;
        }
        i++;
    }

    cout << "Nombre de lettres : " << nb_lettres << endl;
    cout << "Nombre de chiffres : " << nb_chiffres << endl;
    cout << "Nombre d'espaces : " << nb_espaces << endl;
    cout << "Nombre de caractères spéciaux : " << nb_speciaux << endl;
}
int main()
{
    analyser_chaine();
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

void recherche_sous_chaine()
{
    string texte;
    string motif;

    cout << "Entrez la chaîne principale : " << endl;
    getline(cin, texte);
    cout << "Entrez la chaîne motif : " << endl;
    getline(cin, motif);

    int n1 = texte.length();
    int n2 = motif.length();

    for (int i = 0 ; i < n1 - n2 ; i++)
    {
        int j = 0;
        while (j < n2 && texte[i+j] == motif[j])
        {
            j++;
        }
        if (j == n2)
        {
            cout << "Motif trouvé à la position : " << i << endl;
            return;
        }
    }
    cout << "Motif non trouvé" << endl;



}

int main()
{
    recherche_sous_chaine();
    return 0;
}
#include <iostream>
#include <string>

using namespace std;


void concatener_chaine()
{
  string chaine1;
  string chaine2;

    cout << "Entrez la première chaîne de caractères  : " << endl;
    getline(cin, chaine1);
    cout << "Entrez la deuxième chaîne de caractères  : " << endl;
    getline(cin, chaine2);

    int n1 = chaine1.length();
    int n2 = chaine2.length();
    string concat = chaine1 + chaine2;
    for(int i = 0; i < n1; i++)
    {
        concat[i] = chaine1[i];
    }
    for(int j = 0; j < n2; j++)
    {
        concat[n1+j] = chaine2[j];
    }
    concat[n1+n2] = '\0';
    cout << concat << endl;

}

int main()
{
    concatener_chaine();
    return 0;
}
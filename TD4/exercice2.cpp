#include <iostream>
#include <string>

using namespace std;


void palindrome()
{
    string chaine;
    cout << "Entrez une chaîne de caractères  : " << endl;
    getline(cin, chaine);
    int n = chaine.length();
    bool est_palindrome = true;
    for(int i = 0 ; i < n/2; i++)
    {
        if(chaine[i]!=chaine[n-1-i])
        {
            printf("false");
        }
    }
    printf("true");
}


int main()
{
    palindrome();
    return 0;
}
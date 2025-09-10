#include <iostream>

using namespace std;

int puissance(int a, int n){
    int resultat = 1;
    for(int i = 0; i < n ; i++)
    {
        resultat = resultat * a;
    }
    return resultat;
}

int main(){
    cout << puissance(3,0) << endl;
}
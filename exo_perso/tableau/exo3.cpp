#include <iostream>
using namespace std;

int main() {

    int tab[6];

    cout<<"Entrez 6 nombres entiers :" << endl;
    for(int i=0;i < 6; i++){
        cin >> tab[i];
    }

    int x=0;
    cout<<"choisir la valeur de x : ";
    cin >> x;
    bool trouve = false;
    for(int i=0; i<6; i ++){
        if(tab[i] == x ){
            trouve = true;
        }
    }
    if(trouve){
        cout << "La valeur " << x << " a été trouvée." << endl;
    } else {
        cout << "La valeur " << x << " n'a pas été trouvée." << endl;
    }
}
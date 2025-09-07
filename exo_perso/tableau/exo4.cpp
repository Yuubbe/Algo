#include <iostream>
using namespace std;

int main(){
    int tab[8];
    int moyenne = 0;
    cout <<"entrez 8 notes : " << endl;
    for(int i = 0; i<8; i++){
        cin >> tab[i];
        moyenne = moyenne + tab[i];
    }
     moyenne = moyenne / 8;

     for(int i = 0 ; i<8; i ++){
        if(tab[i]>moyenne){
            cout << tab[i] << " est au dessus de la moyenne" << endl;
        }
    }
    cout << "La moyenne est de : " << moyenne << endl;
}




#include <iostream>
using namespace std;

void tableau() {
    int tab[5];

    // Phase 1 : remplissage
    for (int i = 0; i < 5; i++) {
        cout << "Entrez un nombre : ";
        cin >> tab[i];
    }

    // Phase 2 : affichage
    cout << "Voici les nombres que vous avez saisis :" << endl;
    for (int i = 0; i < 5; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int main() {
    tableau();
    return 0;
}

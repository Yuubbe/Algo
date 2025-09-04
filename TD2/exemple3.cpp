#include <iostream>

using namespace std;

int main() {
    int tab[16];
    int moyenne = 0;
    for (int i = 0; i < 16; i++) {
        std::cout << "Entrez la note " << i + 1 << ": ";
        std::cin >> tab[i];
        
    for (int i = 0; i < 16; i++) {
        moyenne += tab[i];
    }
}
   
    
    moyenne = moyenne / 16;
    cout << "La moyenne est de " << moyenne << endl;
    
    
    return 0;
}
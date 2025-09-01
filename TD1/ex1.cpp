#include <iostream>

int main() {
    int a;
    std::cout << "Entrez un nombre: ";
    std::cin >> a;
    if(a<1) {
        std::cout<<"Erreur: Le nombre doit etre superieur a 1" << std::endl;
        return 1;
    }

    
    bool estPremier = true;
    
    for(int i = 2; i < a; i++) {
        if(a % i == 0) {
            estPremier = false;
            
        }
    }
    
    if(estPremier) {
        std::cout << a << " est un nombre premier" << std::endl;
    } else {
        std::cout << a << " n'est pas un nombre premier" << std::endl;
    }
    return 0;
}
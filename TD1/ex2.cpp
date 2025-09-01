#include <iostream>
int main() {
    std::cout << "Entrez un nombre: ";
    int x;
    std::cin >> x;
    int y=x;
 
    if (x <= 0) {
        std::cout << "Le nombre doit être strictement positif." << std::endl;
        return 1;
    }
    

    int somme_diviseurs = 0;
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            somme_diviseurs += i;
        }
    }
    

    if (somme_diviseurs == x) {
        std::cout << x << " est un nombre parfait." << std::endl;
    } else {
        std::cout << x << " n'est pas un nombre parfait." << std::endl;
    }
    
    return 0;
}
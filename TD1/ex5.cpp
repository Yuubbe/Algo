#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    std::srand(std::time(nullptr)); // initialise la graine
    int secret = std::rand() % 100 + 1; // valeur entre 1 et 100
    int nombre;
    std::cout << "Entrez un nombre: ";
    std::cin >> nombre;
    while (nombre != secret) {
        if (nombre > secret) {
            std::cout << "Le nombre secret est plus petit" << std::endl;
        } else {
            std::cout << "Le nombre secret est plus grand" << std::endl;
        }
        std::cout << "Entrez un nombre: ";
        std::cin >> nombre;
    }
    std::cout << "Bravo ! Vous avez trouvé le nombre secret !" << std::endl;
    return 0;
}
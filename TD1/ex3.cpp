#include <iostream>
int main() {
    std::cout << "Entrez un nombre: ";
    int n;
    std::cin >> n;
    int m=n%3;
    if(m==0) {
        std::cout << "Le nombre est divisible par 3" << std::endl;
    } else if(m==1) {
        std::cout << "Le nombre est congru a 1 modulo 3" << std::endl;
    } else {
        std::cout << "Le nombre est congru a 2 modulo 3" << std::endl;
    }
    return 0;
}
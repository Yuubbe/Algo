//
// Created by gambl on 02/09/2025.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    std::cout << "Entrez un entier positif : ";
    std::cin >> n;
    long factorielle = 1;
    for (int i = 1; i <= n; i++) {
        factorielle *= i;

    }
    cout << n << "! = " << factorielle << endl;
    return 0;
}
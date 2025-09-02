//
// Created by gambl on 02/09/2025.
//

#include <iostream>


using namespace std;

int main() {

    int n;
    int somme = 0;
    std::cout<<"Entrez un nombre s'il vous plait  : ";
    std::cin>>n;
    while (n>0) {
        int chiffre = n % 10;
        somme = somme + chiffre;
        n = n / 10;


    }
    std::cout<<somme << std::endl;
}
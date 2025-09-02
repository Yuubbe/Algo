//
// Created by gambl on 02/09/2025.
//

/*  pseudocode :
 *
 *  lire n -> entier
 *  pour i allant de 1 à 10 :
 *      caculer produit =  n  X i
 *  afficher produit
 *
 *
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    int produit = 0;
    std::cout<<"écrire un nombre"<<std::endl;
    std::cin>>n;
    for (int i = 1; i <= 10; i++) {
        produit = n * i;
        std::cout << produit << std::endl;

    }

}
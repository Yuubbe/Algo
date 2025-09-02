//
// Created by gambl on 02/09/2025.
//

/* pseudo code :
 *  lire n
 *  n_original -> n
 *  reverse -> 0
 *  tant que n > 0:
 *      chiffre -> n %10
 *      reverse -> reverse x 10 + chiffre
 *  si reverse -> -> n_original :
 *      afficher "palindrome"
 *
 *
 *  sinon:
 *      afficher "pas palindrome"
 *
 *
 *
 *
 *
 */

#include <iostream>
using namespace std;

int main() {
    int n;

    std::cout<<"Enter a Number : ";
    std::cin>>n;
    int n_original = n;
    int chiffre = 0;
    int reverse = 0;
    while (n>0) {
        chiffre = n %10;
        reverse = reverse*10 + chiffre;

    }
    if (reverse == n_original) {
        std::cout<<"palindrome";
    }
    else {
        std::cout<<"pas palindrome";
    }

}
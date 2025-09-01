#include <iostream>
#include <ctime>

using namespace std;

// Exercice 1
void exercice1()
{
}

// Exercice 2
void exercice2()
{
}

// Exercice 5
void exercice5() {
     // Exemple de tirage d'un nombre aléatoire entre 1 et 100
    std::srand(std::time(nullptr));
    int secret = std::rand() % 100 + 1;

}

int main()
{
    exercice1();
    exercice2();
    exercice5();
    return 0;
}

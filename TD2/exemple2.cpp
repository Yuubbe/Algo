#include <iostream>

using namespace std;

void moyenne(float a, float b, float c) {
    float moyenne = (a + b+ c ) /3;
    cout << "La moyenne est de " << moyenne << endl;
}

int main() {
    float a, b, c;
    cout << "Entrez la note 1: ";
    cin >> a;
    cout << "Entrez la note 2: ";
    cin >> b;
    cout << "Entrez la note  3: ";
    cin >> c;
    moyenne(a, b, c);
    return 0;
}
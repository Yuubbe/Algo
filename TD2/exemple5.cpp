#include <iostream>

using namespace std;

void tab_min_max(int tab[], int taille, int &min, int &max)
{
    max = tab[0];
    min = tab[0];
    for (int i = 1; i < taille; i++)
    {
        if (tab[i] < min){
            min = tab[i];
        }
        if (tab[i] > max){
            max = tab[i];
        }
    }
}

int main(){
    tab_min_max();
}
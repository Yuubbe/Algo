#include <iostream>

using namespace std;



int main(){
    float moyenne(const int tab[], int taille)
    {
        float s = 0.0;
        for(int i = 0; i < taille; i++)
        {
            s+=tab[i];
            return s/taille;
        }
    }
    
    return 0;
}

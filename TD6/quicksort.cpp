#include <iostream>

using namespace std;


int partition(int T[], int debut, int fin)
{
    T[fin]; // pivot , choisi le dernier élément
    int i = (debut - 1); // indice du premier élément de la portion du tableau que l'on veut trier

    //fonction partition qui renvoie la position finale du pivot
    for(int j = debut; j < fin ; j++)
    {
        if(T[j] <= T[fin])
        {
            i++;
            swap(T[i], T[j]);
        }
    }
    swap(T[i + 1], T[fin]);
    return (i + 1);
}

void quicksort(int T[], int debut, int fin) // implemente le tri rapide en appelant la fonction partition
{
    if (debut < fin)
    {
        int indice_pivot = partition(T, debut, fin);
        quicksort(T, debut, indice_pivot - 1);
        quicksort(T, indice_pivot + 1, fin);

        
    }
    // affichage du pivot
    
    cout << "Pivot : " << T[(debut + fin) / 2] << endl;
    for (int i = debut; i <= fin; i++)
    {
        cout << T[i] << " ";
    }
    cout << endl;

}


int main()
{
    int T[7] = {8,2,7,5,1,9,3};
    int n = 7;

    quicksort(T, 0, n - 1);

    cout << "Tableau trié : ";
    for (int i = 0; i < n; i++)
    {
        cout << T[i] << " ";
        
    }
    cout << endl;

    return 0;
}
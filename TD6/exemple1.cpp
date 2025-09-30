#include <iostream>

using namespace std;

int main() {
    
    int T[10] = {37, 12, 58, 4, 29, 73, 19, 46, 8, 65};
    int n = 10;
    
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (T[j] < T[min]) {
                min = j;
            }
        }
        int temp = T[min];
        T[min] = T[i];
        T[i] = temp;
    }
    
    cout << "Tableau trié : ";
    for (int i = 0; i < n; i++) {
        cout << T[i] << " ";
    }
    cout << endl;
    
    return 0;
}


#include <iostream>

using namespace std;

const int N = 3 , M = 4;
typedef int mat34[N][M];
typedef int mat43[M][N];

void somme_matrices(const mat34 A, const mat34 B, mat34 C)
{
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void transposee(const mat34 A, mat43 B, int n , int m)
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            B[j][i] = A[i][j];
}

void print(const mat34 A, int n , int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
           cout << A[i][j] << " ";
        cout << endl;
    }
}
#include <iostream>

using namespace std;

int h(int n){

    int r = 0;
    for(int i = 0; i < n ; i++)
    {
        r = r + i;
    }
    for(int i = 0; i < n*n ; i++)
    {   
        r = r + i;
    }
    return r;


}

int l(int n, int m)
{
    int r = 0;
    if(n>m)
    {
        for(int i =0; i<n ; i++)
        {
            r = r+i;
        }
    }
    else
    {
        for(int i =0; i<m ; i++)
        {
            r = r+i;
        }
    }
    return r;
}

int main(){
    cout << h(3) << endl;
    cout << l(3, 4) << endl;
}
#include <iostream>

using namespace std;

void swap(int &a, int &b, int &c)
{
    int temp = a;
    a = b;
    b = c;
    c = temp;
}


void trier3(int &a, int &b, int &c)
{

    if (a > b)
    {
        swap(a, b, c);
    }
    if (a > c)
    {
        swap(a, b, c);  
    }
    if (b > c)
    {
        swap(b, c, a);
    }

}


int main()
{

    int a, b, c;
    cout << "Entrez trois entiers : ";
    cin >> a >> b >> c;
    trier3(a, b, c);
    cout << "Les entiers tries sont : " << a << " " << b << " " << c << endl;

    return 0;
}

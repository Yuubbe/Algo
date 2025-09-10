#include <iostream>

 using namespace std;

unsigned factorielle(unsigned n)
{
    if (n == 0){
        return 1;

    }else {
        return n * factorielle(n - 1);
    }

}

int main()
{
    factorielle(5);
    cout << factorielle(5) << endl;
    return 0;
}


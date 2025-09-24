#include <iostream>

using namespace std;

int main()
{
    const char chaine[] = "Bonjour";
    int i = 0;
    while (chaine[i] != '\0')
    {
        i++;
    }
    printf("%d", i);
    return 0;
}
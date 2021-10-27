#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char duma[20];
    bool pal = true;

    cin.getline(duma, 20, '\n');
    int n = strlen(duma);

    for (int i = n - 1, j = 0; i >= 0 && j < n; i-- && j++)
    {
        if (duma[i] != duma[j])
        {
            pal = false;
        }
    }
    
    
    if (pal)
    {
        printf("Is palindrome");
    }
    else
    {
        printf("Isn't palindrome");
    }
}
#include <iostream>
using namespace std;

int main()
{
    int i, j, n = 1;
    for (i = 0; i <= 4; i++)
    {
        cout << endl;
        for (j = 1; j <= i; j++)
        {
            cout << n << " ";
            n++;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

void bubbleSorting(int a[], int n)
{
    for (int j = 0; j < n - 1; j++)
    {

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "ENter the size of array : ";
    cin >> n;
    int a[100];

    cout << "Enter the elements of the array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubbleSorting(a , n);

    for (int i = 0; i < n ; i++)
    {
        cout << a[i] << "\t";
    }
}
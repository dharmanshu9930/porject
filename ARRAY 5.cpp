#include <iostream>
using namespace std;

int main()
{
    int i, count = 0, n, a;
    cout << "enter the size of array=";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array=";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter element to search=";
    cin >> a;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            count += 1;
            
            break;
        }
    }

    if (count == 0)
    {
        cout << " No \n";
    }
    else
    {
        cout << "Yes  "  << "index of  element:" << i;
    }

    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	string Arr1[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	for (int i = num1; i <= num2; i++)
	{
		if (i <= 9)
		{
			cout << Arr1[i - 1] << endl;
		}
		else
		{
			if (i % 2 == 0)
			{
				cout << "even" << endl;
			}
			else
			{
				cout << "odd" << endl;
			}
		}
	}
	return 0;
}
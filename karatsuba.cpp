#include <iostream>
#include <math.h>

using namespace std;

int getSize(long);
long karatsuba(long, long);

int main()
{
    long x, y;
    cout << "Enter two large numbers for multiplication:\n";
    cin >> x >> y;
    cout << "Product is: " << karatsuba(x, y) << endl;
    cout << x*y;
    return 0;
}

int getSize(long n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

long karatsuba(long x, long y)
{
    if (x < 10 || y < 10)
        return x * y;

    int size = fmax(getSize(x), getSize(y));

    int n = size/2;
    long p = (long)pow(10, n);
    long a = (long)floor(x / (double)p);
    long b = x % p;
    long c = (long)floor(y / (double)p);
    long d = y % p;

    long ac = karatsuba(a, c);
    long bd = karatsuba(b, d);
    long e = karatsuba(a + b, c + d) - ac - bd;

    return (long)(pow(10,2*(size/2)) * ac + pow(10,(size/2)) * e + bd);
}
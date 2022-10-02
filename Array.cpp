#include <bits/stdc++.h>
using namespace std;

/*set matrix zeroes
void setZeroes(vector<vector<int>> &matrix)
{
    int col0 = 1;
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][0] == 0) // if colum[0] is zero we set col0 =0;
            col0 = 0;
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }

    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = cols - 1; j >= 1; j--)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] == 0;
            if (col0 = 0)
                matrix[i][0] = 0;
        }
    }
}*/

/*Pascal Triangle
vector<vector<int>> generate(int nrows)
{
    vector<vector<int>> r(nrows);

    for (int i = 0; i < nrows; i++)
    {
        r[i].resize(i + 1);
        r[i][0] = r[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        return r;
    }
}*/

/*Rotate array to left by one place
void rotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}*/

/*Check if array is Sorted
bool check(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}*/

/*Stock buy and sell
void buystocksell(int arr[], int n)
{
    int maxi = 0;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mini)
        {
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i] - mini);
        }
        return maxi;
    }
}*/
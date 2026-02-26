#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>> generateMatrix(int n)
{
    vector<vector<int>> arr(n, vector<int>(n));
    int left = 0, right = n - 1, top = 0, bottom = n - 1, val = 1;
    while (left <= right and top <= bottom)
    {
        // left to right
        for (int i = left; i <= right; i++)
        {
            // top
            arr[top][i] = val;
            val++;
        }
        top++;
        // top to bottom
        for (int i = top; i <= bottom; i++)
        {
            // right
            arr[i][right] = val;
            val++;
        }
        right--;
        if (top <= bottom)
        {
            // right to left
            for (int i = right; i >= left; i--)
            {
                arr[bottom][i] = val;
                val++;
            }
            bottom--;
        }
        if (left <= right)
        {
            // bottom to top
            for (int i = bottom; i >= top; i--)
            {
                arr[i][left] = val;
                val++;
            }
        }
        left++;
    }
    return arr;
}
int main()
{

    return 0;
}
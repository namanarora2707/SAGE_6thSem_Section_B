#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int j=0;j<n;j++)
    {
        reverse(matrix[j].begin(),matrix[j].end());
    }
}
int main() {
    
    return 0;
}
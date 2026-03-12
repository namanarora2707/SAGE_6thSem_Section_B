<<<<<<< HEAD
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
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    for(auto row : matrix) {
        for(int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
=======
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
>>>>>>> 2169aa5ed0faf67289cc73db85a439fededbde77
}
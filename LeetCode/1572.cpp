#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int n=mat.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=mat[i][i];
        sum+=mat[i][n-i-1];
    }
    if(n%2==1){
        sum-=mat[n/2][n/2];
    }
    return sum;
}
int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "Matrix:" << endl;
    for (auto row : mat) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    int result = diagonalSum(mat);
    cout << "\nDiagonal Sum: " << result << endl;
    
    return 0;
}

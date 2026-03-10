#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m=matrix.size();
    int n=matrix[0].size();
    vector<vector<int>> ans(m,vector<int>(n,1));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                for(int k=0;k<n;k++){
                    ans[i][k]=0;
                }
                for(int k=0;k<m;k++){
                    ans[k][j]=0;
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(ans[i][j]==0){
                matrix[i][j]=0;
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 0, 3},
        {4, 5, 6},
        {7, 8, 0}
    };
    
    cout << "Original Matrix:" << endl;
    for (auto row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    setZeroes(matrix);
    
    cout << "\nMatrix after setting zeroes:" << endl;
    for (auto row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}

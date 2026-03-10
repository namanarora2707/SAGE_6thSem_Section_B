#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int n=mat.size();
    int m=mat[0].size();
    if(n*m != r*c){
        return mat;
    }
    vector<vector<int>> ans(r,vector<int>(c));
    int x=0,y=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[x][y]=mat[i][j];
            y++;
            if(y==c){
                x++;
                y=0;
            }

        }
    }
    return ans;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2},
        {3, 4}
    };
    int r = 1, c = 4;
    
    cout << "Original Matrix:" << endl;
    for (auto row : mat) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    vector<vector<int>> result = matrixReshape(mat, r, c);
    
    cout << "\nReshaped Matrix (" << r << "x" << c << "):" << endl;
    for (auto row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}

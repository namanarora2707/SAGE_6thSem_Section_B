#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int  i = 0, j = matrix[0].size()-1;
    while (i<matrix.size() && j>=0){
        if (matrix[i][j] == target) return true;
        else if (target>matrix[i][j]) i+=1;
        else if (target<matrix[i][j]) j-= 1;

    }
    return false;
}
int main() {
    
    return 0;
}
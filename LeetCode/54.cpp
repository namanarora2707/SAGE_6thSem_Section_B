#include <iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& arr) {
    int r=arr.size();
    int c=arr[0].size();
    int left=0,right=c-1,top=0,bottom=r-1;
    vector<int> ans;
    while(left<=right and top<=bottom){
        //left to right
        for(int i=left;i<=right;i++){
            //top
            ans.push_back(arr[top][i]);
        }
        top++;
        //top to bottom
        for(int i=top;i<=bottom;i++){
            //right
            ans.push_back(arr[i][right]);
        }
        right--;
        if(top<=bottom){
            //right to left
            for(int i=right;i>=left;i--){
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            //bottom to top
            for(int i=bottom;i>=top;i--){
                ans.push_back(arr[i][left]);
            }
        }
        left++;
    }
    return ans;
}
int main() {
    
    return 0;
}
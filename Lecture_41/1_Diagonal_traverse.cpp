#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    bool up =true;
    int i=0;
    int r=0,c=0;
    vector<int> ans(m*n);
    while(r<m and c<n){
        if(up){
            while(r>0 and c<n-1){
                ans[i]=mat[r][c];
                i++;
                r--;
                c++;
            }
            ans[i]=mat[r][c];
            i++;
            if(c==n-1){
                r++;
            }
            else{
                c++;
            }
        }
        else{
            while(c>0 and r<m-1){
                ans[i]=mat[r][c];
                i++;
                r++;
                c--;
            }
            ans[i]=mat[r][c];
            i++;
            if(r==m-1){
                c++;
            }
            else{
                r++;
            }
        }
        up=!up;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
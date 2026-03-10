#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m=n-1;
    int a[n][n];
    for(int i=m;i>=0;i--){
        int idx=m-i;
        for(int j= 0;j<=i;j++ ){
            if(j==0 or i==m){
                a[idx][j]=1;
            }
            else{
                int val1=a[idx-1][j];
                int val2=a[idx][j-1];
                a[idx][j]=val1+val2;
            }
        }
        int idex=i;
        for(int j=m;j>=m-i+1;j-- ){
            if(j==m or i==m){
                a[idex][j]=1;
            }
            else{
                int val1=a[idex+1][j];
                int val2=a[idex][j+1];
                a[idex][j]=val1+val2;
            }
        }
    }
    // print 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
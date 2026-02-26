#include <iostream>
using namespace std;

int main() {
    int array[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int row=sizeof(array)/(sizeof(int)*sizeof(int));
    int col=sizeof(array[0])/sizeof(int);
    cout<<row<<endl;
    cout<<col<<endl;
    int b[2][3];
    int c[3][3]={1,2,3,4,5,6,7,8,9};
    int d[3][4]={};
    int n,m;
    cin>>n>>m;
    int e[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>e[i][j];
        }
    }
    // traverse yah print
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int i=1;i<=m;i++){
        if(i==1){
            cout<<"*";
            for(int j=1;j<=m-2;j++){
                cout<<" ";
            }
            for(int j=1;j<=m;j++){
                cout<<"*";
            }
        }
        else if(i==m){
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int j=1;j<=m-2;j++){
                cout<<" ";
            }
            cout<<"*";
            for(int j=1;j<=m-1;j++){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=m-1;i>=1;i--){
        if(i==1){
            for(int j=1;j<=m;j++){
                cout<<"*";
            }
            for(int j=1;j<=m-2;j++){
                cout<<" ";
            }
            cout<<"*";  
        }
        else{
            for(int j=1;j<=m-1;j++){
                cout<<" ";
            }
            cout<<"*";
            for(int j=1;j<=m-2;j++){
                cout<<" ";
            }
            cout<<"*";
            
        }
        cout<<endl;
    }
    return 0;
}
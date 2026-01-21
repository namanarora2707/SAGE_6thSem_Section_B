#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=2*i-2;j++){
            cout<<"  ";
        }
        //stars
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        //spaces
        for(int j=1;j<=2*i-2;j++){
            cout<<"  ";
        }
        //stars
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
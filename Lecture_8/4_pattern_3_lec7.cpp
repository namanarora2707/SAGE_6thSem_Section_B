#include <iostream>
using namespace std;

int main() {
    int m;
    cin>>m;
    int n=(m+1)/2;
    for(int i=1;i<=n;i++){
        //outer space
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        cout<<"* ";
        for(int j=1;j<=2*i-3;j++){
            cout<<"  ";
        }
        if(i!=1){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        //outer space
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        cout<<"* ";
        for(int j=1;j<=2*i-3;j++){
            cout<<"  ";
        }
        if(i!=1){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
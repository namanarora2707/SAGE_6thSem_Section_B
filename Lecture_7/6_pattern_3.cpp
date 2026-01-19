#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        //left
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        //right
         for(int j=1;j<=i-1;j++){
            cout<<"* ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }   
        cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //left star
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        //spaces
        for(int j=1;j<=2*(n-i)-1;j++){
            cout<<"  ";
        }
        //right star
        if(i!=n){
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
        }
        else{
            for(int j=1;j<=n-1;j++){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}
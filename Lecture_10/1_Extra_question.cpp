#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 or j==1 or i==n or j==n or i==j or i+j==n+1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}


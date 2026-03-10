#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //total pattern
        for(int j=1;j<=2*i-1;j++){
            if(j%2==0){
                //!
                cout<<"! ";
            }
            else{
                //star
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}
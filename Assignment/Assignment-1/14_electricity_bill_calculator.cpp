#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    if(n<=100){
        cout<<n*2<<endl;
    }
    if(n>100 && n<=200){
        cout<<n*3<<endl;
    }
    if(n>200){
        cout<<n*5<<endl;
    }
    return 0;
}
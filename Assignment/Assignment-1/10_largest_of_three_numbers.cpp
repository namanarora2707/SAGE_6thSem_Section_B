#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<a<<endl;
    }
    else if(c>a && c>b){
        cout<<c<<endl;
    }
    else{
        cout<<b<<endl;
    }
    return 0;
}
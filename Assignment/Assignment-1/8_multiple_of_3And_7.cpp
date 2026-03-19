#include<iostream>
using namespace std;
int main(){

    int integer;
    cin>>integer;

    if( (integer %3==0) && (integer %7==0) ){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
    return 0;
}
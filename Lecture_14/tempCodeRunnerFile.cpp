#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    //flag or monitor
    bool ans=true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            ans=false;
            break;
        }
    }
    if(!ans){
        cout<<"prime nahi hai";
    }
    else{
        cout<<"prime hai";
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int num;
    int sum=0;

    while(cin>>num){  
        sum= sum + num;

        if(sum<0){
            break;       
        }

        cout<<num<<endl;
    }

    return 0;
}

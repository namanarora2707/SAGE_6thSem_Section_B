#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n>=300 and n<=460){
        cout<<"Macbook"<<endl;
    }
    else if(n>=200 and n<=280){
        cout<<"Kurkure"<<endl;
    }
    else if(n>=1100 and n<=1500){
        cout<<"Cycle"<<endl;
    }
    else if(n>50 and n<=80){
        cout<<"Bike"<<endl;
    }
    else{
        cout<<"Better luck Next time"<<endl;
    }
    return 0;
}
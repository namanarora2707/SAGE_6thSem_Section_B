#include<iostream>
using namespace std;
int main(){
    int salary;
    int experience;
    cin>> salary >> experience;

    if(experience>=5){
        cout<<salary/10<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
return 0;
}
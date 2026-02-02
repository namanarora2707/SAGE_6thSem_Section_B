#include <iostream>
using namespace std;
//No arguement and No return
void greet(){
    cout<<"hello"<<endl;
}
//Arguement and no return
void great(string name){
    cout<<"hello "<<name<<endl;
}
// No arguement and return
int subtract(){
    int a=5;
    int b=3;
    int c=a-b;
    return c;
}
//Arguement and return
int add(int a,int b){
    int c=a+b;
    return c;
}
int main() {
    greet();
    great("Tulsi");
    // 1st way
    int a=add(8,3);
    cout<<a<<endl;
    //2nd way
    cout<<add(8,3)<<endl;
    cout<<subtract()<<endl;
    return 0;
}
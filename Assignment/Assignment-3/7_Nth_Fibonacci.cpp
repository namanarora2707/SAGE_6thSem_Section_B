#include<iostream>
using namespace std;

int fibbo(int n){
    //base case
    if(n==0 or n==1){
        return n;
    }
    //recursion
    return fibbo(n-1) + fibbo(n-2);
}

int main ()
{
    int n;
    cin>>n;
    cout<<fibbo(n)<<endl;
   return 0;
}
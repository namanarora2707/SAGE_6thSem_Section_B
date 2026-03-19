#include<iostream>
#include<cmath>
using namespace std;

int binary(int n){
    int g=0;
    int sum=0;
    while (n>0){
        int k=n%10;
        sum= sum + k * pow(2,g);
        g++;
        n=n/10;
    }
    cout<<sum<<endl;
    return 0;
 }

int main ()
{
    int n;
    cin>>n;
   
   binary(n);
   return 0;
}
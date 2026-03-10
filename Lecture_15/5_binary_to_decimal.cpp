#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum=0;
    int g=0;
    while(n>0){
        int k=n%10;
        sum=sum+k*pow(2,g);
        n=n/10;
        g++;
    }
    cout<<sum<<endl;
    return 0;
}
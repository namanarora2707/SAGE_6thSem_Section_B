#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int rev=0;
    while(n!=0){
        int k=n%10;
        rev=rev+k;
        n/=10;
    }
    cout<<abs(rev)<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int rev(int n){
    int rev=0;
    while(n!=0){
        int k=n%10;
        rev=rev*10+k;
        n=n/10;
    }
    return rev;
}
int main() {
    int n;
    cin>>n;
    int bn=1;
    while(n>0){
        int k=n%2;
        bn=bn*10+k;
        n=n/2;
    }
    cout<<rev(bn)/10<<endl;
    return 0;
}
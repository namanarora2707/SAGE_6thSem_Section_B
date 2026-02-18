#include <iostream>
using namespace std;
bool isHappy(int n) {
    int sum=0;
    if(n==1 or n==7){
        return true;
    }
    else if(n<10){
        return false;
    }
    else{
        while(n!=0){
            int k=n%10;
            sum+=k*k;
            n=n/10;
        }
    }
    return isHappy(sum);
}
int main() {
    int n;
    cin>>n;
    cout<<isHappy(n)<<endl;
    return 0;
}
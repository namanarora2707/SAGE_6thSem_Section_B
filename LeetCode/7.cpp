#include <iostream>
#include<climits>
using namespace std;
int reverse(int x) {
    int ans=0;
    while(x!=0){
        int k=x%10;
        if((ans>INT_MAX/10)or (ans<INT_MIN/10)){
            return 0;
        }
        ans=ans*10+k;
        x=x/10;
    }
    return ans;
}
int main() {
    int n=982;
    cout<<reverse(n)<<endl;
    return 0;
}
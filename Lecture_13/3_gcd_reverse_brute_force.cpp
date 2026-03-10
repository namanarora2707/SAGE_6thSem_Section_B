#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 and b%i==0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
// agar ek number composite hai aur dusra number prime hai
// toh dikkat aayegi loop 1 tak chalega
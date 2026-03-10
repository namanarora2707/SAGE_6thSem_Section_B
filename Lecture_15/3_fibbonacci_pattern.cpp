#include <iostream>
using namespace std;
int fibbo(int g){
    //base case
    if(g==0 or g==1){
        return g;
    }
    return fibbo(g-1)+fibbo(g-2);
}
int main() {
    int n;
    cin>>n;
    int g=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<fibbo(g)<<" ";
            g++;
        }
        cout<<endl;
    }
    return 0;
}
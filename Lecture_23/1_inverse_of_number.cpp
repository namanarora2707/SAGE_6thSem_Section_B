#include <iostream>
#include<vector>
using namespace std;
vector<int> convert(int n){
    vector<int> number;
    while(n!=0){
        int k=n%10;
        number.push_back(k);
        n=n/10;
    }
    return number;
}
int main() {
    int n;
    cin>>n;
    vector<int> number=convert(n);
    vector<int> ans(number.size()+1);
    for(int i=0;i<number.size();i++){
        ans[number[i]]=i+1;
    }
    for(int i=number.size();i>=1;i--){
        cout<<ans[i];
    }
    return 0;
}
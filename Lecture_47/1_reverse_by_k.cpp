#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k;
    cin>>k;
    int a=0;
    for(int i=0;i<n/k;i++){
        reverse(nums.begin()+a,nums.begin()+a+k);
        a=a+k;
    }
    reverse(nums.begin()+a,nums.end());
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
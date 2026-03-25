#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
double findMaxAverage(vector<int>& nums, int k) {
    double ans=INT_MIN;
    int n=nums.size();
    int t=0;
    int l=0;
    int r=k;
    for(int i=0;i<k;i++){
        t+=nums[i];
    }
    ans=max(ans,(double)t);
    while(r<n){
        ans=max(ans,(double)t);
        t=t-nums[l];
        t=t+nums[r];
        r++;
        l++;
    }
    ans=max(ans,(double)t);
    return ans/k;
}
int main() {
    vector<int> nums={1,12,-5,-5,50,3};
    int k=3;
    cout<<findMaxAverage(nums,k)<<endl;
    return 0;
}
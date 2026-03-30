#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
    int n=nums.size();
    int l=0;
    int r=0;
    int ans=INT_MAX;
    int sum=0;
    while(r<n){
        sum+=nums[r];
        while(sum>=target){
            ans=min(ans,r-l+1);
            sum-=nums[l];
            l++;
        }
        r++;
    }
    return ans==INT_MAX?0:ans;
}
int main() {
    vector<int> nums={2,3,1,2,4,3};
    int target=7;
    cout<<minSubArrayLen(target,nums)<<endl;   
    return 0;
}
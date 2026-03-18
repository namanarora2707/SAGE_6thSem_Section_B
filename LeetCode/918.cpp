#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxSubarraySumCircular(vector<int>& nums) {
    int n=nums.size();
    int maxsum=nums[0];
    int currmaxsum=nums[0];
    int minsum=nums[0];
    int currminsum=nums[0];
    int total=nums[0];
    for(int i=1;i<n;i++){
        currmaxsum=max(currmaxsum+nums[i],nums[i]);
        maxsum=max(currmaxsum,maxsum);
        currminsum=min(currminsum+nums[i],nums[i]);
        minsum=min(minsum,currminsum);
        total+=nums[i];
    }
    int circularsum=total-minsum;
    if(circularsum==0){
        return maxsum;
    }
    return max(maxsum,circularsum);
}
int main() {
    vector<int> nums={1,-2,3,-2};
    cout<<maxSubarraySumCircular(nums)<<endl;
    return 0;
}
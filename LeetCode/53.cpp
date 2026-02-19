#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int currentsum=0;
    int maxsum=nums[0];
    for(int i=0;i<nums.size();i++){
        currentsum+=nums[i];
        if(currentsum>maxsum){
            maxsum=currentsum;
        }
        if(currentsum<0){
            currentsum=0;
        }
    }
    return maxsum;
}
int main() {
    vector<int> nums={2,1,-3,4,1,-1,2,1,-4,5};
    cout<<maxSubArray(nums)<<endl;
    return 0;
}
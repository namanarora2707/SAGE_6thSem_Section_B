#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    return nums[nums.size()/2];
}
int main() {
    vector<int> nums={1,2,3,4,1,1,1,1,2,3,4,1,1,1,2};
    cout<<majorityElement(nums)<<endl;
    return 0;
}
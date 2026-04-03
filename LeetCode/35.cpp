#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int s=0;
    int e=nums.size()-1;
    if(target>nums[e]){
        return e+1;
    }
    while(s<=e){
        int m=s+(e-s)/2;
        if(nums[m]==target){
            return m;
        }
        else if(target<nums[m]){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return s;
}
int main() {
    vector<int> nums={1,3,5,6};
    int target=5;
    cout<<searchInsert(nums,target)<<endl;
    return 0;
}
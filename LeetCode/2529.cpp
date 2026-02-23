#include <iostream>
#include <vector>
using namespace std;
int maximumCount(vector<int>& nums) {
    int p=0,n=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            p++;
        }
        else if(nums[i]<0){
            n++;
        }
    }
    return max(p,n);
}
int main() {
    vector<int> nums={-3,-3,2,2,7,8,9};
    cout<<maximumCount(nums)<<endl;
    return 0;
}
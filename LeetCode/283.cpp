#include <iostream>
#include <vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
}
int main() {
    vector<int> nums={1,0,3,0,12};
    moveZeroes(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
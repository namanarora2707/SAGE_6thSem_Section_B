#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int>& nums) {
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
    return;
}
int main() {
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
    for(int val : nums) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
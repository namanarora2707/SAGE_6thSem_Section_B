#include <iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int unique=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[unique]){
            unique++;
            nums[unique]=nums[i];
        }
    }
    return unique+1;
}
int main() {
    vector<int> nums={1,1,2,2,2,3,3,4,4,5};
    cout<<removeDuplicates(nums)<<endl;
    return 0;
}
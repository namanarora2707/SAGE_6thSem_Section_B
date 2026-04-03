#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int missingNumber(vector<int>& nums) {
    int n=nums.size();
    n=(n*(n+1))/2;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    return n-sum;
}
int main() {
    vector<int> nums={3,0,1};
    cout<<missingNumber(nums)<<endl;
    return 0;
}
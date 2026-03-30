#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
    int n=nums.size();
    vector<int> ps(n);
    ps[0]=nums[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+nums[i];
    }
    return ps;
}
int main() {
    vector<int> nums={1,2,3,4};
    vector<int> ps=runningSum(nums);
    for(int i=0;i<nums.size();i++){
        cout<<ps[i]<<" ";
    }
    return 0;
}
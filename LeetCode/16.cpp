#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int result=nums[0]+nums[1]+nums[2];
    for(int i=0;i<n-2;i++){
        if(i>0 and nums[i]==nums[i-1]){
            continue;
        }
        int j=i+1,k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(abs(target-sum)<abs(target-result)){
                result=sum;
            }
            if(sum==target) return target;
            else if(sum<target) j++;
            else k--;
        }
    }
    return result;
}
int main() {
    vector<int> nums={-1,2,1,-4};
    cout<<threeSumClosest(nums,1)<<endl;
    return 0;
}
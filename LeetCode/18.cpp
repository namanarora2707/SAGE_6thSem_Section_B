#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(i>0 and nums[i]==nums[i-1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(j>i+1 and nums[j]==nums[j-1]){
                continue;
            }
            int left=j+1,right=n-1;
            while(left<right){
                long long sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                if(sum==target){
                    ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right and nums[left]==nums[left-1]){
                        left++;
                    }
                    while(right>left and nums[right]==nums[right+1]){
                        right--;
                    }
                }
                else if(sum<target) left++;
                else right--;
            }
        }
    }
    return ans;
}
int main() {
    vector<int> nums={1,0,-1,0,-2,2};
    vector<vector<int>> ans=fourSum(nums,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<4;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
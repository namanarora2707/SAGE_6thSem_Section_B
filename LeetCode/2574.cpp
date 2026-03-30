#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> leftRightDifference(vector<int>& nums) {
    int n=nums.size();
    vector<int> ls(n,0),rs(n,0), ans(n);
    //left sum calculate kara
    for(int i=1;i<n;i++){
        ls[i]=ls[i-1]+nums[i-1];
    }
    //right sum calculate karna
    for(int i=n-2;i>=0;i--){
        rs[i]=rs[i+1]+nums[i+1];
    }
    for(int i=0;i<n;i++){
        ans[i]=abs(ls[i]-rs[i]);
    }
    return ans;
}
int main() {
    vector<int> nums={10,4,8,6,12};
    vector<int> ans=leftRightDifference(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
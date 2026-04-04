#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    ans.push_back(nums);
    while(next_permutation(nums.begin(),nums.end())){
        ans.push_back(nums);
    }
    return ans;
}
int main() {
    vector<int> nums={1,2,3};
    vector<vector<int>> ans=permute(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<nums.size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
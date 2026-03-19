#include<iostream>
#include<vector>
using namespace std;
 vector<long long> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<long long> leftProduct(n,1);
        vector<long long> rightProduct(n,1);
         vector<long long> ans(n);
 
         //left product
        for(int i = 1; i < n; i++){
            leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
        }
         //right product
        for(int i = n - 2; i >= 0; i--){
            rightProduct[i] = rightProduct[i+1] * nums[i+1];
        }

        //final ans
        for(int i=0; i<n; i++){
            ans[i]=leftProduct[i]*rightProduct[i];
        }
        return ans;
 }

int main(){
    int n;
    cin>>n;

     vector<int> nums(n);

    // input
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    vector<long long> result = productExceptSelf(nums);

    // output
    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }

return 0;
}
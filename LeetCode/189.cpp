#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    k=k%n;
    reverse(nums.begin(),nums.end());
    //aakhri K elments aage chahiye
    reverse(nums.begin(),nums.begin()+k);
    //aage ke elements shift  ho jaaye
    // yah joh bache elements unka reverse kardo
    reverse(nums.begin()+k,nums.end());
    return;
}
int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(nums, k);
    for(int val : nums) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
bool isMonotonic(vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        } else if (nums[i] < nums[i - 1]) {
            increasing = false;
        }

        if (!increasing && !decreasing) {
            return false;
        }
    }
    return true;
}
int main() {
    vector<int> nums={1,2,2,3};
    cout<<isMonotonic(nums)<<endl;
    return 0;
}
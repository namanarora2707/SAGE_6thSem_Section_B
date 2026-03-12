#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int j = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (j == 1 || nums[i] != nums[j - 2]) {
            nums[j++] = nums[i];
        }
    }
    return j;
}
int main() {
    vector<int> nums = {1,1,1,2,2,3};
    int k = removeDuplicates(nums);
    cout << "k = " << k << endl;
    cout << "Array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}

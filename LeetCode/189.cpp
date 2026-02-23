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
    
    return 0;
}
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
 int n;
 cin>>n;
 int nums[n];

 //input
 for(int i=0; i<n; i++){
     cin>> nums[i];
 }

 //sqaure of each element of array nums
 for(int i=0 ; i<n; i++){
     nums[i] = nums[i] * nums[i];
 }

 //sort the sqared array nums
 sort(nums , nums + n);

 //print the nums
 for(int i=0; i<n; i++){
     cout<<nums[i]<<" ";
 }

 return 0;
}

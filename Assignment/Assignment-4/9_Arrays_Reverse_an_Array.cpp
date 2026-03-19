#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rev(int n , vector<int>nums){
	
	reverse(nums.begin(),nums.end());
	
	for(int i=0;i<n;i++){
		cout<<nums[i]<<endl;
	}
	return nums;
}

int main() {
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
  rev(n,nums);
  
	return 0;
}
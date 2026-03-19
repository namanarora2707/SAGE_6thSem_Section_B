#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n=nums.size();
        return nums[n/2];
}

int main () {

	int n;
	cin>>n;

	vector<int>nums(n);

	for(int i=0; i<n; i++){
		cin>>nums[i];
	}

	cout<<majorityElement(nums);
	return 0;
}
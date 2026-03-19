#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> urgency(vector<int>nums){

	sort(nums.begin(), nums.end());

	for(int i=0; i<nums.size() ; i++){
		cout<<nums[i]<<endl;
	}
	return nums;
}

int main() {
	int n;
	cin>>n;

	vector<int>nums(n);

	for(int i =0; i<n; i++){
		cin>>nums[i];
	}

	urgency(nums);
	return 0;
}
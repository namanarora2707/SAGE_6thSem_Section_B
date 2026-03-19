#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin>>n;

	vector<int>nums(n);

	for(int i=0; i<n; i++){
		cin>>nums[i];
	}

	int Q;
	cin>>Q;

	while(Q>0){
		int x;
		cin>> x;

		vector<int>temp(n);

		for(int i=0; i<n; i++){
			int back;

			if(i - x < 0){
				back = i - x + n;
			}
			else{
				back = i - x;
			}

			temp[i] = nums[i] + nums[back];
		}

		nums = temp;
		Q--;
	}

	int sum =0;
	for(int i=0; i<n ; i++){
		sum = sum + nums[i];
	}
	cout<<sum % 1000000007;
	return 0;
}
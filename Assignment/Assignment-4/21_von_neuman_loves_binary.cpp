#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

//function to convert from binary into decimal
long long binaryToDecimal(long long n){
	int g=0;
    long long sum=0;
    while (n>0){
        int k=n%10;
        sum= sum + k * pow(2,g);
        g++;
        n=n/10;
    }
    return sum;
}

int main() {
	int n;
	cin>>n;

	vector<long long>nums(n);

	for(int i=0; i<n; i++){
		cin>>nums[i];
	}

	for(int i=0; i<n; i++){
		cout<<binaryToDecimal(nums[i])<<endl;
	}

	return 0;
}
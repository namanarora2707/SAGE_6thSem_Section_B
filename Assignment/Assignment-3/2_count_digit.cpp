#include<iostream>
using namespace std;

int countDigit(int n, int targetNumber){
	int frequency = 0;
	while(n>0){
		int k= n%10;
		if(k == targetNumber){
			frequency++;
		}
		n = n/10;
	}
	cout<<frequency<<endl;
	return 0;
}

int main() {
	int n;
	cin>>n;

	int targetNumber;
	cin>> targetNumber;
	countDigit(n, targetNumber);
	return 0;
}
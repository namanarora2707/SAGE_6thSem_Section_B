#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
while(t--){
	long long n;
	cin>>n;
	int k;
	cin>>k;
	int ans=0;
	int l=1;
	long long h=n;

	while(l<=h){
		int m = l + (h - l)/2;

		if( pow(m , k) <= n){

			ans = m;
			l = m + 1;
		}

		else {
			 
			 h = m - 1;

		}

	}

	cout<<ans<<endl;
}
return 0;
}
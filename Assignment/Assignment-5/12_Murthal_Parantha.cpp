#include<iostream>
#include<vector>
using namespace std;

int cook( vector<int> & parantha , int L, long long mid){
	int c=1;
	int t=0;

	for(int i= 0; i<parantha.size() ; i++){
		if(t+ parantha[i] <= mid){
			t = t + parantha[i];
		}
		else{
			c++;
			t=parantha[i];
		}
	}
	return c<=L;
}


int main() {

	int P,L;
	cin>>P>>L;
	long long maxy = 0;
	long long sum = 0;
	 
	vector<int>parantha(P);

	for(int i =0; i<P; i++){
		cin>>parantha[i];
	}
	for(int i=0; i<P; i++){
		sum=sum+parantha[i];
		maxy= max(maxy, (long long)parantha[i]);
	}
	long long l=maxy;
	long long h=sum;
	int result=0;

	while(l<=h){
		long long m = l+(h+l)/2;
		if(cook(parantha,L,m)){
			result=m;
			h=m-1;
		}
		else{
			l=m+1;
		}
	}
	cout<<result<<endl;
	 
	return 0;
}
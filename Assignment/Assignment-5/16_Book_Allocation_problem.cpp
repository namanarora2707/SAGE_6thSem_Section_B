#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool canArrange( vector<int>&books , int m , long long mid){
	int student = 1;
	int t = 0;

	for(int i =0; i<books.size(); i++){
		if(books[i]+t <= mid){
			t=t+books[i];
		} 
		else{
			student++;
			t=books[i];
		}
	}
	return student<=m;
}

int main() {
	int t;
	cin>>t;
	while(t>0){
		int n,m ;
		cin>>n>>m;

		long long maxy=0;
		long long sum=0;

		vector<int>books(n) ;

		for(int i=0; i<n; i++){
			cin>>books[i];
		}
		for(int i=0; i<n; i++){
			sum = sum + books[i];
			maxy = max( maxy, (long long)books[i]);
		}

		long long low = maxy;
		long long high = sum;
		long long ans=0;

		while( low <= high){
			long long mid= low +(high-low)/2;
			if(canArrange(books,m,mid)){
				ans=mid;
				high =mid-1;
			}
			else{
				low = mid+1;
			}
		}
		cout<<ans<<endl;
		t--;
	}

    return 0;
}
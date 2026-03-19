#include<iostream>
#include<vector>
using namespace std;
int main () {
	int n;
	cin>>n;
	  vector<vector<int>>ans(n,vector<int>(n));
	  for(int i=0;i<n;i++){
		  for(int j=0;j<n;j++){
			  cin>>ans[i][j];
		  }
	  }
	  int maxSum=0;
	  int maxIndex=0;
	  for(int col=0 ; col<n ; col++){
		  int sum=0;
		  for(int row=0 ; row<n ; row++){
                sum = sum + ans[row][col];
		  }
		  if(sum>maxSum){
			  maxSum=sum;
			  maxIndex=col+1;  
		  }
	  }
	  cout<<maxIndex<<" "<<maxSum;

	return 0;
}

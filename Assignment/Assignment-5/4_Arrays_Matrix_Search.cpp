#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int n,m; // n is for rows and m is for columns
    cin>>n>>m;
	
	int count=0;
    vector<vector<int>> arr(n,vector<int> (m)); // initialized 2D vector
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j]; // input of 2D vector
        }
    }

	int target;
	cin>>target;

	 for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           if(arr[i][j]==target){
			   count++;
		   }
        }
	 }
		if (count>0){
			cout<<1;
		}
		else{
			cout<<0;
		}
		return 0;
    }

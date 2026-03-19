#include<iostream>
#include<algorithm>
using namespace std;

void tripletSum(int N,int arr[],int target){

     sort(arr,arr+N);

	for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
				if(arr[i]+arr[j] ==target){
					cout<<arr[i]<<" and "<<arr[j]<<endl;
				}
			}
		}
	}
    
int main() {
	int N;
	cin>>N;
	int arr[N];
	  
	  for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;

	tripletSum(N,arr,target);

	return 0;
}
#include<iostream>
#include<climits>
using namespace std;

int maxValue(int n, int arr[]){

    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(ans<arr[i]){
            ans=arr[i];
        }
    }
    return ans;
}

int main() {
	 int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	cout<< maxValue(n, arr);
	return 0;
}
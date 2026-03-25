#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    int n=arr.size();
    int ans=0;
    int t=0;
    int l=0;
    int r=k;
    for(int i=0;i<k;i++){
        t+=arr[i];
    }
    if(t/k>=threshold){
        ans++;
    }
    while(r<n){
        t=t-arr[l];
        t=t+arr[r];
        l++;
        r++;
        if(t/k>=threshold){
            ans++;
        }
    }

    return ans;
}
int main() {
    vector<int> arr={2,2,2,2,5,5,5,8};
    int k=3;
    int threshold=4;
    cout<<numOfSubarrays(arr,k,threshold)<<endl;
    return 0;
}
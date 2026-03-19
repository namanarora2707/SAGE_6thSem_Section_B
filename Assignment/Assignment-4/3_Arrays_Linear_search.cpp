#include<iostream>
using namespace std; 

int linear(int arr[], int n, int m){

    for(int i= 0; i<n; i++) {
        if(arr[i] == m) {
            return i;  
        }
    }

        return -1;
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    int m;

    for(int i =0; i<n; i++){
        cin>> arr[i];
    }

    cin>>m;
    cout<<linear(arr, n, m);
    return 0;
}
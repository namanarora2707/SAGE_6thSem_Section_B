#include <iostream>
using namespace std;
// linear search
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int value=19;
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            cout<<i+1<<endl;
        }
    }
    return 0;
}
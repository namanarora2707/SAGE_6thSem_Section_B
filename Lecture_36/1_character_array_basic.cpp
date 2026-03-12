#include <iostream>
using namespace std;

int main() {
    int c;
    cin>>c;
    // user input
    char arr[c];
    for(int i=0;i<c;i++){
        cin>>arr[i];
    }
    // traversing
    for(int i=0;i<c;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // normal character array
    char a[]={'q','w','e','r','t'};
    //size of array
    int n=sizeof(a)/sizeof(char);

    // traversing
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
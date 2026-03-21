#include<iostream>
using namespace std;
int main ()
{
    int m, n;
    cin>>m;
    n= (m+1)/2;
    
   
    for(int i=1;i<=n;i++){
    
        // spaces
        for(int j=1; j<=n-i; j++){
            cout<<"    ";
     	}

        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        for(int j=1; j <= 2*i-3;j++){
            cout<<"  ";
        }

        for(int j=1; j <=i ;j++){
           if(i != 1)
            cout<<j<<" ";
        }

        cout<<endl;
    } 
    for(int i=n-1;i>=1;i--){
    
        // spaces
        for(int j=1; j<=n-i; j++){
            cout<<"    ";
     	}

        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        for(int j=1; j <= 2*i-3;j++){
            cout<<"  ";
        }

        for(int j=1; j <=i ;j++){
           if(i != 1)
            cout<<j<<" ";
        }

        cout<<endl;
    } 
    
   return 0;
}
#include<iostream>
using namespace std;
int main ()
{
    int m,n;
    cin>>m;
    n= (m+2)/2;
   
    for(int i=1;i<=n;i++){
        
        for(int j =1; j <= n-i; j++ ){
        	cout<<"\t";
            
        }
        for(int j=1; j<=i;j++){
            cout<<"*\t";
        }
		for(int j= i-1; j>=1;j--){
            cout<<"*\t";
        }

        cout<<endl;
    } 
    for(int i=n-1;i>=1;i--){
        
        for(int j =1; j <= n-i; j++ ){
        	cout<<"\t";
            
        }
        for(int j=1; j<=i;j++){
            cout<<"*\t";
        }
		for(int j= i-1; j>=1;j--){
            cout<<"*\t";
        }

        cout<<endl;
    } 
    
   return 0;
}
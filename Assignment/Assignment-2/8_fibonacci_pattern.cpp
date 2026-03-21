#include<iostream>
using namespace std;
int main ()
{
    int n, fnum= 0, nxtnum= 1;
    cin>>n;
    
   
    for(int i=1;i<=n;i++){
    	
  		for(int j=1; j<= i; j++){
        	cout<<fnum<<" ";
        	nxtnum = nxtnum + fnum;
        	fnum = nxtnum - fnum;   
        }
       
  		cout<<endl;
    } 
   
   return 0;
}

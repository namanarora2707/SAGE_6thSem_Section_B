#include<iostream>
using namespace std;
int main ()
{
    int n, out;
    cin>>n;
    
   
    for(int i=0;i<=n;i++){
    	
        //spaces
        for(int j =1; j <= i; j++){
        	cout<<"  ";
        }
  		for(int j=0; j<= n-i; j++){
        	cout<<n-i-j<<" ";   
        }
		for(int j=n-i-1; j>= 0; j--){
		   	cout<<n-i-j<<" ";   
		  }

  		cout<<endl;
    } 
	   for(int i=n-1;i>=0;i--){
	    	
	        //spaces
	        for(int j =1; j <= i; j++){
	        	cout<<"  ";
	        }
	  		for(int j=0; j<= n-i; j++){
	        	cout<<n-i-j<<" ";   
	        }
			for(int j=n-i-1; j>= 0; j--){
			   	cout<<n-i-j<<" ";   
			  }

	  		cout<<endl;
	    } 
	   
   	
   return 0;
}

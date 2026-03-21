#include<iostream>
using namespace std;
int main ()
{
    int n, out;
    cin>>n;
    
   
    for(int i=1;i<=n;i++){
    	out = i;
  		for(int j=1; j<= i; j++){
           if(i ==j || j ==1)
           cout<<out<<"\t";
       else
       	cout<<0<<"\t";
        }
  		cout<<endl;
    } 
   	
   return 0;
}

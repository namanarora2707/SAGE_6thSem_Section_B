#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int out = 1;
    
   
    for(int i=1;i<=n;i++){
        
        for(int j=1; j<=i;j++){
            cout<<out<<"\t";
            out++;
        }

        cout<<endl;
    } 
    
   return 0;
}
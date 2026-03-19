#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n; 
    cin>>n;
    bool ans = true;
    //hum pahle se assume kr rhe hai ki number prime hoga
    for(int i=2; i<=sqrt(n); i++){
        if(n % i==0){
            ans=false;
        }
    }

    if(ans){ //ans == true
        cout<<"Prime";
    }
    else{ // ans == false
        cout<<"Not Prime";
    }
   return 0;
}
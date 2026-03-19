#include<iostream>
using namespace std;

//adding the digit
int digitsum(int n){
    int sum= 0;
    while(n!=0){
        int k= n% 10;
        sum+=k;
        n= n/10;
    }
    return sum;
}

//checking factors are prime or not
bool prime(int n){
    for(int i=2; i*i<=n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

//main function
int main ()
{
    int n;
    cin >> n;
    int sum=0;
    int factor = 0;
    sum = digitsum(n);
    
    //
    for(int i=2; i<=n; i++){
        while(n % i ==0){
            if(prime(i)){
                factor+=digitsum(i);
            }
            n=n/i;
        }
    }

    if(sum==factor){
        cout<<1<<endl;
    }

    else{
        cout<<0;
    }

   return 0;
}
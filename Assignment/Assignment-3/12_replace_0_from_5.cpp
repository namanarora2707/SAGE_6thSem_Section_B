#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
	int result = 0; 
	int k;

    if(n == 0){ // what if n = 0 ,replace it with 5
		cout<<5;
		return 0;
	}

    while(n>0){

        int k=n%10; // k=2
        if(k==0){
            k=5; // if k==0 then replaces it from 5
        }

		result = result * 10 + k; // reversing number
        n=n/10; // n=102/10 = 10
    }

	int output = 0;
	while(result>0){
		int z = result%10; // z = 1
		output = output * 10 + z; // reverse the reversed number
		result =result/10; 
	}
	cout<<output; 

    return 0;
} 
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int oddSum = 0;
	int evenSum = 0;
    int count = 1; // to chech the place of the digit 

    while(n>0) { 
        int k = n % 10;//gives out the last digit

        if(count % 2 == 1)
            oddSum= oddSum+ k;

        else
            evenSum= evenSum +k ;

        n= n / 10;
        count++;
    }

    cout<< oddSum <<endl;
    cout<< evenSum <<endl;

	return 0;
}
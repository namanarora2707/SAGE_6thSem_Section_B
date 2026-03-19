#include<iostream>
#include<cmath>
using namespace std;
int main(){
	

    int n1 , n2;
    cin>>n1>>n2;

	for(int i= n1; i<= n2; i++){
    int og = i;
    int temp = i;
	int n = i;
    int sum = 0;

    //digit calculate krna
    int l = 0;
    while (temp != 0){
        temp = temp /10;
        l++;
    }

//power nikalna and add karna
     while (n!=0){
        int k = n % 10;
       sum= sum + pow(k,l);
       n = n/10;
    }

    //compare karna
    if(og==sum){
        cout<<og<<endl;
    }
	}
    
    return 0;
}
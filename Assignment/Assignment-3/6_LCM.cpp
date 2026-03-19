#include<iostream>
#include<algorithm>
using namespace std;

//function of LCM 
int lcm(int n1, int n2){
	int count =0;

	for(int i= max(n1 , n2); i<= n1 * n2; i++){ // for(int i = 6; i<= 4*6 ; i++)
		if(i% n1 == 0 and i % n2 == 0 ){
			count++;
		}	
		if(count == 1){ // when it is true for the time : as the definition says
			cout<<i<<endl; // print the value of i
			count++; // after printing least common multiple , increment the count
		}
	}

	return 0;
}

int main() {
	int n1;
	int n2;
	cin>>n1>>n2;
	lcm(n1,n2);

	return 0;
}
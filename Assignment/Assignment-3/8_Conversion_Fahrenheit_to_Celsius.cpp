#include<iostream>
using namespace std;
int main() {
	int minRange;
	int maxRange;
	int difference;
	cin>>minRange>>maxRange>>difference;

	for(int i= minRange; i<= maxRange; i= i+ difference){ // for(int i = 0; i<= 100 ; i = 0+20)
		int Celcius =  (i - 32) * 5/9 ; //formula 
		int Fahrenheit = i; // stores value of i in Fahrenheit

		cout<<Fahrenheit <<" "<< Celcius<<endl;
	}

	return 0;
}
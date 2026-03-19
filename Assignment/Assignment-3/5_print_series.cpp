#include<iostream>
using namespace std;

//function to print series
int series(int n1,int n2)
{
	int count = 1;
	while(count <= n1){ 
		int value = 3 * count + 2; // According to condition
		if(value % n2 != 0){
			cout<<value<<endl;	
		}
		else{
			n1++; // if value % n2 == 0
		}	
	  count++; 
	}
	return 0;
}

int main()
{
	int n1;
	int n2;
	cin>>n1>>n2;
	series(n1,n2); // function calling
	return 0;
}
#include<iostream>
using namespace std;

//function of calc total length of x
int len(int x){
    int count=0;
    while(x>0){
        x=x/10;
        count++;
    }
    return count;
}

int main(){
    int x;
    cin>>x;
    int L = len(x); // total digit (l)
    int totalLength = L; // store original length
	int result = 0; 
	int t;

    while(x>0){

        int t=x%10; 
        int inverse = 9 - t;

        //leading digit when it is 9
        if(L==1 and inverse == 0){
            result = result *10 + t;
        }

        else if(inverse<t){
        
           result = result * 10 + inverse;
        }
        else{
            result = result * 10 + t;
        }
        x=x/10; 
        L--;
     }

	int output = 0;
	for(int i = 0; i < totalLength; i++){
		int z = result%10; // z = 1
		output = output * 10 + z; // reverse the reversed number
		result =result/10; 
	}
	cout<<output; 

    return 0;
}
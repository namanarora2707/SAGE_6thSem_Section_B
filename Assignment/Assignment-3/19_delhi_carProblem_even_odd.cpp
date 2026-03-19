// with array
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];

	for(int i=0 ; i<n; i++){ //input
		cin>>arr[i];
	}

	for(int i= 0; i< n; i++ ){ // one by one har car ke liye number plate check kr raha hai
		int carNumber = arr[i]; // current value jo array me hai vo first aur baki cars me de rha h sequence wise

		int oddSum = 0;
	    int evenSum = 0;
	
	  while( carNumber>0) {
        int k = carNumber % 10;

        if(k % 2 == 1)
            oddSum= oddSum+ k;
            
        else
            evenSum= evenSum +k ;

        carNumber = carNumber / 10;
        
    }

	if(oddSum % 3 == 0 || evenSum % 4 == 0 ){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}

	return 0;
}

//without array
// #include<iostream>
// using namespace std;
// int main() {
// 	int t;
// 	cin>>t;

// 	while(t>0){
// 		int n;
// 		cin>>n;

// 		int oddSum = 0;
// 	    int evenSum = 0;
// 		while(n>0){
	
//         int k = n % 10;

//         if(k % 2 == 1)
//             oddSum= oddSum+ k;

//         else
//             evenSum= evenSum +k ;

//         n = n / 10;
// 	}

// 	if(oddSum % 3 == 0 || evenSum % 4 == 0){
// 		cout<<"Yes"<<endl;
// 	}
// 	else{
// 		cout<<"No"<<endl;
// 	}
// 	t--;
// 	}
// 	return 0;
// }
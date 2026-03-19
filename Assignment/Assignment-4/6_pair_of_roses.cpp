#include <iostream>
#include<climits>
#include <vector>
using namespace std;

int main(){

    int T;
    cin>>T;

    while(T>0) {

        int n;
        cin>>n;

        vector<int> price(n);

        for(int i=0; i<n; i++){
            cin>>price[i];
        }

        int m;
        cin>> m;

        int a=0, b=0;
        int minDiff= INT_MAX;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){

                if(price[i] + price[j] == m){

                    int diff= abs(price[i] - price[j]);

                    if(diff < minDiff){
                        minDiff = diff;
                        a = min(price[i], price[j]);
                        b = max(price[i], price[j]);
                    }
                }
            }
        }
		
        cout << "Deepak should buy roses whose prices are " << a << " and " << b << "." << endl << endl;

		T--;
    }

    return 0;
}
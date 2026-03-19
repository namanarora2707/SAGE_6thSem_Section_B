#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int n;
    cin>>n; 

    vector<int>number(n);

	for(int i=0; i<n; i++){
		cin>>number[i];
	}

    vector<int> ans(number.size());

    for(int i=0; i<number.size(); i++){
        ans[number[i]]= i;
    }

    for(int i= 0; i< number.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}  
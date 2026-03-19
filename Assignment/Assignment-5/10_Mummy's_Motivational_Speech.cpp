#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<vector<int>> nums(n, vector<int>(n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> nums[i][j];
        }
    }
    bool isLowerTriangular = true;

    for(int i=0; i<n; i++){
        for(int j= i + 1; j<n; j++){ 
            if(nums[i][j] != 0){
                isLowerTriangular = false;
                break;
            }
        }
    }

    if(isLowerTriangular == true){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
    return 0;
}
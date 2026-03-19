#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int n,m; // n is for rows and m is for columns
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int> (m)); // initialized 2D vector
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j]; // input of 2D vector
        }
    }

    // checking what is constant while traversing also what is traversing ?
    // according to the Question
    int left = 0;
    int right = m-1;
    int top = 0;
    int bottom =n-1;
    

    while(left<=right and top<=bottom){
       
        // top to bottom
        for(int i=top; i<=bottom; i++){
            // right
            cout<<arr[i][left]<<", ";
        }
        left++;
		 // left to right
        for(int i=left; i<=right; i++){
            //top
            cout<<arr[bottom][i]<<", ";
        }
        bottom--;

		if(left<=right){
            //bottom to top
            for(int i= bottom; i>= top; i--){
                cout<<arr[i][right]<<", ";
            }
            right--;
        }

        if(top<=bottom){
            //right to left

            for(int i= right ; i>=left; i--){
                //bottom
                cout<<arr[top][i]<<", ";
            }
            top++;
        }
        
    }
	cout<<"END";
   return 0;
}

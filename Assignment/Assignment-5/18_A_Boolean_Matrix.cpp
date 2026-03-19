#include<iostream>
#include<vector>
using namespace std;

int main () {
	int m,n;
	cin>>m>>n;

	vector<vector<int>> matrix(m, vector<int>(n) );
	
		for(int i =0; i<m; i++){
			for(int j=0; j<n; j++){
				cin>>matrix[i][j];
			}
		}

        vector<vector<int>> ans(m,vector<int> (n,0) );

        for(int i=0; i<m; i++){ // row
            for(int j=0; j<n; j++){ // column
                if(matrix[i][j] == 1){
                    for(int k=0; k<m; k++){ // column == 1
                        ans[k][j] = 1; 
                    }
                    for( int k=0; k<n; k++){ // row == 1
                        ans[i][k] = 1;
                    }
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(ans[i][j] == 1){
                    matrix[i][j] = 1;
                }
            }
        }

		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				cout<<matrix[i][j]<<" ";
			}
			cout<<endl;
		}
		
	return 0;
}

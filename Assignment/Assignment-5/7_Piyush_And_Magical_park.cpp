#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n,m,k,s;
	cin>>n>>m>>k>>s;

	vector<vector<char>>park(n,vector<char>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>park[i][j];
		}
	}
	
	bool lost=false;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			
		if(park[i][j]=='.'){
				s=s-2;
				if(j != m-1){
					s--;
				}
			}
			else if(park[i][j]=='*'){
				s=s+5;
				if( j != m-1 ){
					s--;
				}
			}
			else if(park[i][j]=='#'){
				break;
			}


			 if(s<k){
				lost=true;
				break;
			}
        }
		if(lost==true){
			break;
		}
	}
	if(lost==false && s>=k){
		cout<<"Yes"<<endl;
		cout<<s<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}

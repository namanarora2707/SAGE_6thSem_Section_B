#include<iostream>
#include<vector>
using namespace std;

 int trap(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int answer = 0;
        int rightmax = 0;
        int leftmax = 0;

        while(left < right){
            if(height[left] <= height[right]){
                if(leftmax >= height[left]){
                    answer += leftmax - height[left];
                }
                else{
                    leftmax = height[left];
                }
                left++;
            }
            else{
                if(rightmax >= height[right]){
                    answer += rightmax - height[right];
                }
                else{
                    rightmax = height[right];
                }
                right--;
            }
        }
        return answer;
    }

int main() {
	int t;
	cin>>t;

	while(t>0){
	 int n;
    cin >> n;

    vector<int> height(n);

    // input heights
    for(int i = 0; i < n; i++){
        cin >> height[i];
    }

    int result = trap(height);

    cout<<result<<endl;

	t--;
	}

	return 0;
}
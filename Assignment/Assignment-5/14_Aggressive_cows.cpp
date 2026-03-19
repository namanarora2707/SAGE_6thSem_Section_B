#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool canArrange(vector<int>& stalls, int cows, int mid){
    int count = 1;
    int lastPos = stalls[0];

    for(int i = 1; i < stalls.size(); i++){
        if(stalls[i] - lastPos >= mid){
            count++;
            lastPos = stalls[i];
        }
    }
    return count >= cows;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> stalls(n);

    for(int i = 0; i < n; i++){
        cin >> stalls[i];
    }

    sort(stalls.begin(), stalls.end());

    long long low = 1;
    long long high = stalls[n-1] - stalls[0];
    long long ans = 0;

    while(low <= high){
        long long mid = low + (high - low) / 2;

        if(canArrange(stalls, m, mid)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}
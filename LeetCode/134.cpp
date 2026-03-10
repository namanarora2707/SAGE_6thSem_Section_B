#include <iostream>
#include<vector>
using namespace std;
int startStation(vector<int> gas,vector<int> cost){
    int total=0;
    int bachihuigas=0;
    int ans=0;
    for(int i=0;i<gas.size();i++){
        total+=(gas[i]-cost[i]);
        bachihuigas+=(gas[i]-cost[i]);
        if(bachihuigas<0){
            bachihuigas=0;
            ans=i+1;
        }
    }
    if(total>=0){
        return ans;
    }
    return -1;
}
int main() {
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};
    cout << startStation(gas, cost) << endl;
    return 0;
}
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
    
    return 0;
}
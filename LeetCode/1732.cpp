#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int largestAltitude(vector<int>& gain) {
    int c=0;
    int m=0;
    for(int i=0;i<gain.size();i++){
        c+=gain[i];
        m=max(m,c);
    }
    return m;
}
int main() {
    vector<int> gain={-5,1,5,0,-7};
    cout<<largestAltitude(gain)<<endl;
    return 0;
}
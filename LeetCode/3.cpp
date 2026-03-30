#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int lengthOfLongestSubstring(string s) {
    int ans=0;
    int r=0;
    string a;
    int n=s.size();
    while(r<n){
        while(a.find(s[r])!=string::npos){
            a.erase(a.begin());
        }
        a.push_back(s[r]);
        ans=max(ans,(int)a.size());
        r++;
    }
    return ans;
}
int main() {
    string s="gdeiehhwdhhe";
    cout<<lengthOfLongestSubstring(s)<<endl;
    return 0;
}
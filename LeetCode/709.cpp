#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string toLowerCase(string s) {
    string ans;
    for(int i=0;i<s.size();i++){
        ans.push_back(tolower(s[i]));
    }
    return ans;
}
int main() {
    string s="Hello";
    cout<<toLowerCase(s)<<endl;
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    string ans = "";
    string j = "";
    
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == ' ' && j.empty()){
            continue;
        }
        if(s[i] != ' '){
            j.push_back(s[i]);
        }
        if(s[i] == ' ' && !j.empty()){
            reverse(j.begin(), j.end());
            ans.append(j);
            j.clear();
            ans.push_back(' ');
        }
    }

    if(!j.empty()){
        reverse(j.begin(), j.end());
        ans.append(j);
        j.clear();
    }

    if(!ans.empty() && ans[ans.size()-1] == ' '){
        ans.pop_back();
    }

    return ans;
}

int main() {
    string s;
    getline(cin, s);

    cout << reverseWords(s);

    return 0;
}
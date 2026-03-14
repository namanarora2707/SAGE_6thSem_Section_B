#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {
    int freq[26] = {0};

    for(int i = 0; i < t.size(); i++){
        freq[t[i] - 'a']++;
    }

    for(int i = 0; i < s.size(); i++){
        freq[s[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++){
        if(freq[i] != 0){
            return false;
        }
    }

    return true;
}

int main() {
    string s, t;
    cin >> s >> t;

    if(isAnagram(s, t)){
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
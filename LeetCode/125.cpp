#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int l = 0;
    int r = s.size() - 1;

    while(l < r){
        while(l < r && !isalnum(s[l])){
            l++;
        }
        while(l < r && !isalnum(s[r])){
            r--;
        }

        if(tolower(s[l]) != tolower(s[r])){
            return false;
        }

        l++;
        r--;
    }

    return true;
}

int main() {
    string s;
    getline(cin, s);

    if(isPalindrome(s)){
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
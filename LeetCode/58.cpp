#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int l = 0;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == ' ' && l == 0){
            continue;
        }
        if(s[i] != ' '){
            l++;
        }
        else{
            break;
        }
    }
    return l;
}

int main() {
    string s;
    getline(cin, s);

    cout << lengthOfLastWord(s);

    return 0;
}
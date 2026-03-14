#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseString(vector<char>& s) {
    reverse(s.begin(), s.end());
}

int main() {
    int n;
    cin >> n;

    vector<char> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    reverseString(s);

    for(char c : s){
        cout << c << " ";
    }

    return 0;
}
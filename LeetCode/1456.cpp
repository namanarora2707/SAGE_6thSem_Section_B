#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int maxVowels(string s, int k) {
    int n = s.size();
    int l = 0, r = 0;
    int count = 0, ans = 0;

    while(r < n){
        // current character ko add kara hai 
        if(isVowel(s[r])) count++;

        // container size maintain karni hai
        if(r - l + 1 > k){
            if(isVowel(s[l])) count--;
            l++;
        }
        // jab meri container size k ke equal ho jaaye
        if(r - l + 1 == k){
            ans = max(ans, count);
        }

        r++;
    }

    return ans;
}
int main() {
    string s="abciiidef";
    int k=3;
    cout<<maxVowels(s,k)<<endl;
    return 0;
}
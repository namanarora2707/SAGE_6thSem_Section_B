#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int myAtoi(string s) {
    int i=0;
    int n=s.size();
    //whitespace
    while(i<n and s[i]==' '){
        i++;
        continue;
    }
    //sign check karna
    int sign=1;
    if(i<n and (s[i]=='+' or s[i]=='-')){
        if(s[i]=='-'){
            sign=-1;
        }
        i++;
    }
    long long num=0;
    while(i<n and isdigit(s[i])){
        num=num*10+(s[i]-'0');
        if(sign*num<INT_MIN){
            return INT_MIN;
        }
        if(sign*num>INT_MAX){
            return INT_MAX;
        }
        i++;
    }
    return sign*num;
}
int main() {
    string s="13345ejdje";
    cout<<myAtoi(s)<<endl;
    return 0;
}
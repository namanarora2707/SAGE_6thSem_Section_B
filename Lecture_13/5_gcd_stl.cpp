#include <iostream>
// __gcd()
#include<algorithm>
// -infinity and +infinity
#include<climits>
using namespace std;

int main() {
    int c=INT_MAX; //+infinty
    int d=INT_MIN; // -infinity
    int a=5;
    int b=10;
    cout<<__gcd(a,b);
    return 0;
}
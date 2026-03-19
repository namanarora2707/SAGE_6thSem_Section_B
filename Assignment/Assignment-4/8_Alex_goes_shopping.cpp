#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    while(q--) {
        int A, k;
        cin >> A >> k;

        int count = 0;

        for(int i = 0; i < n; i++) {
            if(A % arr[i] == 0) {
                count++;
            }
        }

        if(count >= k) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}
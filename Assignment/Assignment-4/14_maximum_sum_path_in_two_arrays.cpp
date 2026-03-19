#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        int i = 0, j = 0;
        long long sum1 = 0, sum2 = 0, ans = 0;

        while(i < n && j < m) {
            if(a[i] < b[j]) {
                sum1 += a[i];
                i++;
            }
            else if(a[i] > b[j]) {
                sum2 += b[j];
                j++;
            }
            else {
                // common element
                ans += max(sum1, sum2) + a[i];
                sum1 = 0;
                sum2 = 0;
                i++;
                j++;
            }
        }

        // remaining elements
        while(i < n) sum1 += a[i++];
        while(j < m) sum2 += b[j++];

        ans += max(sum1, sum2);

        cout << ans << endl;
    }

    return 0;
}
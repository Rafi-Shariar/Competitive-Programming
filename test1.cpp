#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    stack<int> st;
    int ans = 0;  // Initialize ans to 0

    for (int i = 0; i < n; i++) {
        if (st.empty() || abs(st.top() - v[i]) <= k) {
            st.push(v[i]);
        } else {
            while (!st.empty() && abs(st.top() - v[i]) > k) {
                st.pop();
            }
            st.push(v[i]);
        }

        int sz = st.size();
        ans = max(ans, sz);
    }

    cout << ans << endl;

    return 0;
}

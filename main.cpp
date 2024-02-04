#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);

const int N = 1e6;
vector<vector<ll>> v;

void numberofDivisor(ll n) {
    ll num = n;
    vector<ll> temp;  // Temporary vector to store values for 'n'

    // ... (rest of the code remains the same)

    temp.push_back(sm_PF);
    temp.push_back(bigPF);
    temp.push_back(disPF);
    temp.push_back(TotPF);
    temp.push_back(numDiv);

    v.push_back(temp);  // Push the temporary vector into the main vector
}

void find_div(ll n) {
    ll num = n;
    vector<ll> temp;  // Temporary vector to store values for 'n'

    // ... (rest of the code remains the same)

    temp.push_back(sumDiv);

    v.push_back(temp);  // Push the temporary vector into the main vector
}

int main() {
    fast
    v.reserve(N);  // Reserve space for N vectors to avoid frequent reallocation

    for (int i = 0; i <= 1000000; i++) {
        numberofDivisor(i);
        find_div(i);
    }

    int t = 1;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        // Assuming v[n] contains only one vector with sum values
        cout << v[n][0] << " " << v[n][1] << " " << v[n][2] << " " << v[n][3] << " " << v[n][4] << endl;
    }

    return 0;
}

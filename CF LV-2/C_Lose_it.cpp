#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);

    if (n < 6) {
        cout << n << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }

    vector<int> p({4, 8, 15, 16, 23, 42});

    int seq[6] = {0};

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < 6; j++) {

            if (v[i] == p[j]) {

                if (j == 0) {
                    seq[0]++;
                } else {

                    if (seq[j - 1] > 0) {
                        seq[j - 1]--;
                        seq[j]++;
                    }
                }
                
                break;
            }
        }
    }

    int ans = n-(seq[5]*6);

  cout<<ans<<endl;

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() {
    int N;
    cin >> N;

    vector<long long> sequence(N);
    long long lcmValue = 1;

    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
        lcmValue = lcm(lcmValue, sequence[i]);
    }

    for (int i = 0; i < N; i++) {
        if (lcmValue % sequence[i] != 0 || sequence[i] > 1e9) {
            cout << -1 << endl;
            return 0;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << sequence[i] << " ";
    }

    cout << endl;
    return 0;
}

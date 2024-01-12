#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void find_div(int n, int m, vector<int>& v) {
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0 && m % i == 0) {
            v.push_back(i);
            if (n / i != i && m % (n / i) == 0) {
                v.push_back(n / i);
            }
        }
    }
}

int main() {
    int n = 12;
    int m = 18;
    vector<int> commonDivisors;

    find_div(n, m, commonDivisors);

    cout << "Common divisors of " << n << " and " << m << " are: ";
    for (int divisor : commonDivisors) {
        cout << divisor << " ";
    }

    return 0;
}
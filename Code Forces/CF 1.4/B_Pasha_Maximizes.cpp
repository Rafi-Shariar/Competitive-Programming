#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;
    cin>>s>>k;

    for (int i = 0; i < s.size() && k > 0; i++) {
        char max_digit = s[i];
        int max_pos = i;

        for (int j = i + 1; j < s.size() && j <= i + k; j++) {

            if (s[j] > max_digit) {

                max_digit = s[j];
                max_pos = j;

            }
        }

        
        for (int j = max_pos; j > i; j--) {

            swap(s[j], s[j - 1]);
            k--;
        }
    }

    cout<<s<<endl;

    return 0;
}

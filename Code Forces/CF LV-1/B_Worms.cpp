#include<bits/stdc++.h>
using namespace std;

int findIndex(int freq[], int n, int target) {
    int l = 0, r = n - 1;
    int index = -1;
    
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (freq[mid] >= target) {
            index = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    
    return index;
}

int main() {
    int n;
    cin>>n;
    int freq[n] = {0};
    int sum = 0;
  
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a;
        freq[i] = sum;
    }
  
    int q; cin>>q;

    while (q--) {
        int a;
        cin>>a;
        
        int index = findIndex(freq, n, a);

        if (index!=-1) {
            cout<< index+1 <<endl;
        }
    }
  
    return 0;
}

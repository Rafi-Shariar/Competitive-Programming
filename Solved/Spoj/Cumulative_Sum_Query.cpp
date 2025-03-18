#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);



int main()
{
    fast

    int n; cin >> n;
    vector<int>v(n);

    int c = 0;
    vector<int>sum;

    for(int i = 0 ; i < n; i++){
         cin >> v[i];
         c = c + v[i];
         sum.push_back(c);

    }

    int q; cin >> q;
    while (q--)
    {
        int l,r;
        cin >> l>>r;

        if(l > 0)cout << sum[r] - sum[l-1] << endl;
        else cout << sum[r] << endl;
 
    }
    
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  18-October-2024  15:53:11
*/ 
 
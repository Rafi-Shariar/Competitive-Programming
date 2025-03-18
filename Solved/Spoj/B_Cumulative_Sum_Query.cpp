#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define forin(x,n)  for(int i=0; i<n; i++) cin>>x[i];
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif


//https://www.spoj.com/problems/CSUMQ/
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);

        forin(v,n);
        int freq[100001] = {0};
        freq[0] = v[0];

        for(int i=1; i<n; i++) freq[i] = freq[i-1] + v[i];

        int q; cin >> q;

        while (q--)
        {
            int a,b;
            cin >> a >> b;

            if( a==0 ) cout << freq[b] << endl;
            else
            {
                cout << freq[b] - freq[a-1] << endl;
            }
            
        }
        
        
        
    }
    

    return 0;
}
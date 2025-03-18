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



int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n,m; cin >> n >> m;

        vector<string> v;

        for(int i=0; i<n; i++){
            string s;  cin >> s;
            v.push_back(s);
        }

        debug(v);

        map<string,int>mp;

        for (int i = 0; i < m; i++)
        {
            string s; cin >> s;
            mp[s]++;
        }

        // for(auto i : v) cout << i << " ";

        for (int i = 0; i < n; i++)
        {
            string s = v[i];

            if( mp[s] > 0 ) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        
        
    }
    

    return 0;
}
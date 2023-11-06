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


//https://codeforces.com/contest/1890/problem/A
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        map<int,int>mp;

        for (int i = 0; i < n; i++)
        {
            int a; cin >> a;
            mp[a]++;
        }

        if( mp.size() > 2) cout << "No" << endl;
        else if ( mp.size() == 2)
        {
            vector<int>v;
            for(auto i : mp){
                v.push_back(i.second);
            }

            int dif = abs( v[0] - v[1]);

            if( dif <= 1) cout << "Yes" << endl;
            else cout << "No" << endl;

        }
        else cout << "Yes" << endl;
        
        
    }
    

    return 0;
}
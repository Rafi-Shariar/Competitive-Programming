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


//https://vjudge.net/contest/600885#problem/H
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {

        int q; cin >> q;

        int a,b; string s;
        map<string,int>mp;

        while (q--)
        {
            cin >> a >> s;

            if( a==1){
                cin >> b;
                mp[s] += b;
            }
            else if ( a == 2) mp[s] = 0;
            else cout << mp[s] << endl;
        }

        

        
    }
    

    return 0;
}
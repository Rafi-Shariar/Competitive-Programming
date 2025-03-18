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


//https://vjudge.net/contest/600885#problem/Y
int main()
{
    fast

    int n,q;
    cin  >> n >> q;

    map<string,int>mp;

    while (n--)
    {
        string s;
        int a;
        cin >> s >> a;
        mp[s] = a;
    }

    while (q--)
    {
        ll total = 0;

        string s;

        while ( cin >> s && s[0] != '.')
        {
            total += mp[s];
        }

        cout << total << endl;
        
        
    }
    
    

    
    

   
    

    return 0;
}
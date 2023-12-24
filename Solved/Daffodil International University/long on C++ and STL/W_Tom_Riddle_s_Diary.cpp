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

//https://vjudge.net/contest/600885#problem/W

int main()
{
    fast

    int n; cin >> n;
    map<string,int>mp;

    while (n--)
    {
        string s; cin >> s;

        if(mp[s] == 0) cout << "NO" << endl;
        else  cout << "YES" << endl;

        mp[s]++;
    }
    
    

    return 0;
}

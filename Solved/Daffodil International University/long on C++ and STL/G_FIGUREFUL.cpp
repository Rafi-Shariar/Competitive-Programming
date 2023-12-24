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


//https://vjudge.net/contest/600885#problem/G
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {

        int n; cin >> n;
        map<pair<int,int> , string>mp;

        for (int i = 0; i < n; i++)
        {
            int a,b; cin >> a >> b;
            string s; cin >> s;

            mp[{a,b}] = s ;
        }


       int q; cin >> q;

       while (q--)
       {
         int a,b; cin >> a >> b;

         cout << mp[{a,b}] << endl;
       }
       
     
    }
    

    return 0;
}
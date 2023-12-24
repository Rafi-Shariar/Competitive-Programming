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


//https://vjudge.net/contest/600885#problem/O
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        map<int,int>mp;
        int mx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            int a; cin >> a;
            mp[a]++;
            mx = max( mp[a], mx);
        }

        int rest = n - mx;

        // cout << rest ;

        if( rest >= mx){

            if( n % 2 == 1) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else {

           // cout << n - rest << endl;
            cout << mx - rest << endl;
        }



          
    }
    

    return 0;
}
/*

1 - 2*
2 - 2*
3 - 2

mx = 2 ; 6-2 = 4,  

4 - 3
5 - 2 -> 1

3 , 5-3 = 2 , 
*/
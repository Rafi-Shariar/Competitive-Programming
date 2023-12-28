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


//https://codeforces.com/problemset/problem/486/A
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        ll n; cin >> n;

        ll ev = n/2;


        ll total = ev * (ev+1);

        if( n % 2 == 0) n = n/2;
        else n = (n/2) + 1;

        ll sum_of_odd = (n*n);


        cout << total - sum_of_odd << endl;
        
    }
    

    return 0;
}
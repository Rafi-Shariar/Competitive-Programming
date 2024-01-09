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

//https://www.spoj.com/problems/ETF/
int totient( int n){

    int ans = n;

    for (int i = 2; i*i <= n; i++)
    {
        if( n%i == 0){

            while ( n%i == 0) n /= i;
            ans -= ans/i;
            
        }
    }

    if( n > 1) ans -= ans/n;

    return ans;
    
}
int main()
{
    fast

    ll n; 

    while (cin >> n && n)
    {
        cout << totient(n) << endl;
    }
    
    

    return 0;
}
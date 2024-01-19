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


ll numberofDivisor( ll n){
    map<ll,int>mp;
    while( n%2==0){
        mp[2]++;
        n/=2;
    }

    for (ll i = 3; i <= sqrt(n); i+=2)
    {
        while( n % i == 0){
            mp[i]++;
            n/=i;
        }
    }

    if(n>2) mp[n]++;

    ll ans = 0;
    for( auto i : mp){

        //cout << i.first << "-->" << i.second << endl;
        ans += (i.second );
    }

    return ans;

}

int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {

        ll n; cin >> n;

        cout << numberofDivisor(n) << endl;
        
    }
    

    return 0;
}
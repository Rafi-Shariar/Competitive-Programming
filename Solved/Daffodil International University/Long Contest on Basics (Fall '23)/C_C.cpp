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


//https://vjudge.net/contest/589783#problem/C
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<ll>v(n);
        forin(v,n);

        ll c = 0;

        for (int i = 1; i < n; i++)
        {
            //cout << v[i] <<" "<< v[i-1]<< endl;
            if( v[i] < v[i-1]){

             ll dif = ( v[i-1] - v[i]);
             c += dif;
             v[i] += dif;

            }
            
        }

        cout << c <<endl;
        
        
    }
    

    return 0;
}
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


//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        ll a,n;
        cin >> a >> n;

        ll sum = 0;

        for (int i = 2; i <= n; i+=2)
        {
           // cout << pow(a,i) << " ";
            sum += round(pow(a,i) );
        }

        cout << sum << endl;
        
       
        
    }
    

    return 0;
}
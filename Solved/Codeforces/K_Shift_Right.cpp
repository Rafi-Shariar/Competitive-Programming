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


//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/K
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n,shifts;
        cin >> n >> shifts;

        vector<int>v(n);
        forin(v,n);

        vector<int>ans(n);

        int idx = shifts % n;

        for (int i = 0; i < n; i++)
        {
            int val = v[i];

            if( i + idx >= n){
                
                int dn = n -1 - i;

                ans [ 0 + idx - dn - 1] = val;

            }
            else  ans[i+idx] = val;

        }

        for(auto i : ans ) cout << i << " ";
        cout << endl;        
        
    }
    

    return 0;
}
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


//https://vjudge.net/contest/589783#problem/J
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin>>n;

        if(n>1 && n <= 3) cout << "NO SOLUTION" << endl;
        else
        {
            for(int i=2; i<=n; i+=2) cout << i <<" ";
            for(int i=1; i<=n; i+=2) cout << i <<" ";

            cout<<endl;
        }
        
        
    }
    

    return 0;
}
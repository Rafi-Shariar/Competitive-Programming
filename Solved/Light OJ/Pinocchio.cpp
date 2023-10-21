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


//https://lightoj.com/problem/pinocchio
int main()
{
    fast

    int t=1;
    cin>>t;

  for (int x = 1; x <=t; x++)
  {
    int n; cin>>n;
    vector<int>v(n+1);
    v[0] = 2;
    
    for(int i=1; i<=n; i++) cin>>v[i];

    int c = 0;

    for (int i = 1; i <=n ; i++)
    {
        c += ( v[i] - v[i-1] + 4)/5;
    }

    printf("Case %d: %d\n", x,c);
    





    
  }
  
    

    return 0;
}
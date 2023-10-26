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


void findMax(vector<int>&v, int &sum, int i){

    if( i == v.size()) return;

    ans = max(ans, v[i]);

    findMax(v,ans,i+1);
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {

        int n; cin >> n;
        vector<int>v(n);
        forin(v,n);

        int ans = 0;
        
        findMax(v,ans,0);

        cout << ans << endl;

        
    }
    

    return 0;
}
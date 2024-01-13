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


//https://codeforces.com/contest/1920/problem/A
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;

        int l = INT_MIN;
        int R = INT_MAX;
        int rem = 0;

        vector<int>v;

        while (n--)
        {
            int a,b;
            cin >> a >> b;

            if( a == 1){
                l = max(l,b);
          
            }
            else if ( a == 2){

                R = min(R, b);
              
            }
            else
            {
                v.push_back(b);
               
            }
            
            
        }

        for (int i = 0; i < v.size(); i++)
        {
            int val = v[i];

            if( val >= l && val <= R) rem++;

        }

        int ans = R - l + 1 - rem ;

        if( rem<=0) cout << 0 << endl;
        else cout << ans << endl;
        

     
        
    }
    

    return 0;
}
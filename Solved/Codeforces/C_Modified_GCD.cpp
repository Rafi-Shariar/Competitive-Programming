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

//https://codeforces.com/problemset/problem/75/C
map<int,int>mp;
void find_div(ll n){

      for(ll i = 1; i*i <= n; i++){
      if(n % i == 0){
        mp[i]++;
        if( n / i != i ){
          mp[n/i]++;
        }
      }
   }

}

int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int a,b; cin >> a >> b;

        find_div(a);
        find_div(b);

        vector<int>v;

       for(auto i : mp){

        if( i.second == 2) v.push_back(i.first);
       }
        
        // for(auto i : v) cout << i << " ";
        // cout << endl;

        int q; cin >> q;

        while (q--)
        {
            int l,r;
            cin >> l >> r;

            int ans = -1;


            for (int i = 0; i < v.size(); i++)
            {
                if( v[i] >= l && v[i] <= r) ans = v[i];
            }

            cout << ans << endl;
            
            

        }
        

       
        

        
    }
    

    return 0;
}
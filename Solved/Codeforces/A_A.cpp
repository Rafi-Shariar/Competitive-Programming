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

        map<int, pair<int,int>>mp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int cur_sum = v[i] + v[j];

                if( mp.find(cur_sum) != mp.end()){

                    int x = mp[cur_sum].first;
                    int y = mp[cur_sum].second;

                    if( x!=i && x!=j && y!=i && y!=j){

                        cout << "YES" << endl;
                        cout << i+1 << " " << j+1 << " " << x+1 << " " << y+1 << endl;
                        return 0;

                    }
                }

                mp[cur_sum] = {i,j};
            }
            
        }

        cout << "NO" << endl;
        
        
    }
    

    return 0;
}
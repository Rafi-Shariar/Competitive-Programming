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


//https://atcoder.jp/contests/abc335/tasks/abc335_b
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;

        vector< pair<int, pair<int,int>> > v;


        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                for (int k = 0; k <= n; k++)
                {
                    if ( i + j + k <= n){

                        v.push_back({i, {j,k}});
                    }
                }
                
            }
            
        }


        for(auto i : v){

            cout << i.first << " " << i.second.first << " " << i.second.second << endl;
        }


        


        
        
    }
    

    return 0;
}
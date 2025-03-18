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

//https://lightoj.com/problem/sum-of-factorials
vector<ll>mp(20);
ll vl=1;
void build(){

    mp[0] = 1;
    
    for (int i = 1; i < 20; i++)
    {
        vl*=i;
        mp[i] = vl;

    }

}

int main()
{
    //fast

    int t=1,tt=1;
    cin>>t;

    build();

    debug(mp);

    while (t--)
    {
        ll n; cin >> n;
        vector<int>ans;

        for (int i = mp.size()-1; i >= 0; i--)
        {
            if( mp[i] <= n){
                n -= mp[i];
                ans.push_back( i );
            }
          
        }

        reverse(ans.begin(), ans.end());

        printf("Case %d: ", tt++);

        if( n==0 ){

            for (int i = 0; i < ans.size() - 1; i++)
            {
                printf("%d!+", ans[i]);
            }

            printf("%d!\n", ans [ ans.size() - 1]);
            
        }
        else cout << "impossible" << endl;

        
        

    }
    

    return 0;
}
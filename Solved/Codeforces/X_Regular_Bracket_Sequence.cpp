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


//https://vjudge.net/contest/576547#problem/X
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        string s; cin >> s;

        deque<char>dq;
        int ans  = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if( s[i] == '(') dq.push_back(s[i]);
            else
            {
                if( !dq.empty() && dq.back() == '('){
                    ans++;
                    dq.pop_back();
                }
            }
            
         }


         cout << ans*2 << endl;
        
        
    }
    

    return 0;
}
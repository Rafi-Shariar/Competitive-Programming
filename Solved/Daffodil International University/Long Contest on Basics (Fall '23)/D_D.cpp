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


//https://vjudge.net/contest/589783#problem/D
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        string s; cin>>s;
        string ans;

        int c = 0;

        for (int i = s.size()-1; i >= 0; i--)
        {

            ans += s[i];
            c++;

            if(c==3){
                ans += ',';
                c = 0;

            }
            
        }

        int x = 0;

        if( ans[ ans.size()-1]==',') x+=1;

        for (int i = ans.size()-1-x; i >= 0; i--)
        {
            cout<<ans[i];
        }
        cout<<endl;
        
        
    }
    

    return 0;
}
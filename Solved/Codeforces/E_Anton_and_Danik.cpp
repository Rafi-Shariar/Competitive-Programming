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
        int n; cin>>n;
        string s; cin>>s;

        int a = 0;

        for (int i = 0; i < n; i++)
        {
            if(s[i]=='A') a++;
        }

        int d = n - a;

        if(a==d) cout<<"Friendship"<<endl;
        else if( a>d) cout<<"Anton"<<endl;
        else cout<<"Danik"<<endl;
        
        
    }
    

    return 0;
}
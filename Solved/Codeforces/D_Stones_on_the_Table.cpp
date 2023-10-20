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

        int c = 0;

        for (int i = 1; i < s.size(); ++i)
        {
            if(s[i-1] == s[i]){
                c++;
                s[i] = s[i-1];
            }
        }

        cout<<c<<endl;
    }
    

    return 0;
}
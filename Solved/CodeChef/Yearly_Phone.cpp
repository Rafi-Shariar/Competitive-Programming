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

//https://www.codechef.com/START117D/problems/PHONEYRs

int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        string s; cin >> s;

        cout << "K" << s[s.size()-2] << s[s.size()-1] << endl;
        
    }
    

    return 0;
}
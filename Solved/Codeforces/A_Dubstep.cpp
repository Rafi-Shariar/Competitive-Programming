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


//https://codeforces.com/problemset/problem/208/A
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        string s; cin >> s;

        size_t pos;

        while ( ( pos = s.find("WUB") )!= string::npos)
        {
            
            s.replace(pos, 3 , " ");
        }

        string ans = "";

        for (int i = 0; i < s.size(); i++)
        {

            if( s[i] == ' '){

                if( i == 0 || i == s.size()-1 || ans.back() == ' ') continue;
            }

            ans += s[i];
            
        }

        cout << ans << endl;
        




       
        
        
        
        
    }
    

    return 0;
}
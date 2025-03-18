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


//https://codeforces.com/problemset/problem/501/B
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        map<string , string > owner;

        while (n--)
        {
            string a,b;
            cin >> a >> b;

            if( owner.find( a ) == owner.end() ) owner[ b ] = a;
            else
            {
                owner[ b] = owner[ a ];
                owner.erase(a);
            }
             
        }
        

        cout << owner.size() << endl;

        for(auto i : owner){

            cout << i.second << " " << i.first << endl;
        }
        
    }
    

    return 0;
}
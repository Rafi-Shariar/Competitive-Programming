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


//https://vjudge.net/contest/600885#problem/D
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        set<int>st;
        while (n--)
        {
            int a,b;
            cin >> a >> b;

            if(a==1) st.insert(b);

            if( a==2) st.erase(b);

            if( a==3){

                if( st.find(b) != st.end()) cout << "Yes" << endl;
                else cout << "No" << endl;
            }


        }
        
        
    }
    

    return 0;
}
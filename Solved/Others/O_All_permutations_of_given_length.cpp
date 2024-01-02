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


//https://vjudge.net/contest/574988#problem/O
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        string s = "";
        char c = '1';
        for(int i=0; i<n; i++) { s+= c; c++; }
        

        set<string>st;
        st.insert(s);

        while (next_permutation(s.begin(), s.end()))
        {
            st.insert(s);
        }

        for(auto i : st){
            cout << i << endl;
        }
        
        
    }
    

    return 0;
}
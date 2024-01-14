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
        int n,m;
        cin >> n >> m ;

        set<int>st;

        for (int i = 0; i < n; i++)
        {
            int a; cin >> a;
            st.insert(a);
        }

        for (int i = 0; i < m; i++)
        {
            int a; cin >> a;
            st.insert(a);
        }

        vector<int>v;

        for(auto i : st) v.push_back(i);

        for (int i = 0; i < v.size()-1; i++)
        {
            cout << v[i] << " ";
        }

        cout << v[v.size()-1] << endl;
        
        
        

    }
    

    return 0;
}
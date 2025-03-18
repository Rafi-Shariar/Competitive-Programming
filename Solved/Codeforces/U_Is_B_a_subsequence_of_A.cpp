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


//https://vjudge.net/contest/556835#problem/U
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int>v(n);
        forin(v,n);

        deque<int>dq;
        for (int i = 0; i < m; i++)
        {
            int a; cin >> a;
            dq.push_back(a);
        }


        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            int value = v[i];

            if( value == dq.front()){
                dq.pop_front();
            }
        }


        if(dq.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
        
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  30-January-2024  13:18:29
*/ 
 
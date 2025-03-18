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

//https://cses.fi/problemset/task/1161

int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n,k;
        cin >> k >> n;
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for (int i = 0; i < n; i++)
        {
            int a; cin >> a;
            pq.push(a);
        }


        ll ans = 0;

        while (pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            int x = a+b;
            ans += x;

           // cout << a << " " << b << " " << ans << endl;
            pq.push(x);
        }

        cout << ans << endl;
        


        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  30-January-2024  11:47:47
*/ 
 
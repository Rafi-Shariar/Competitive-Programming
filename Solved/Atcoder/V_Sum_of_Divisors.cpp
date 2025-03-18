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

//https://atcoder.jp/contests/abc172/tasks/abc172_d?lang=en
const int n = 1e7+9;
vector<int>v(n);
void precal(){

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j+=i)
        {
            v[j] += 1;
        }
        
    }
    
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    precal();

    while (t--)
    {
        int n; cin >> n;

        ll sum = 0;

        for (ll i = 1; i <= n; i++)
        {
            sum += (i * v[i] * 1LL);
        }

        cout << sum << endl;
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  10-February-2024  23:14:09
*/ 
 
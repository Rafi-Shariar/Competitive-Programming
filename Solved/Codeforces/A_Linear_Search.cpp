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

//https://codeforces.com/problemset/problem/919/B
bool sum_of_dig(int n){

    int sum = 0;

    while (n)
    {
        sum += n%10;
        n/=10;
    }

    return sum == 10;
    
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;

        vector<int>v;
        v.push_back(19);

        int i = 20;

        while (v.size() != n)
        {
            if( sum_of_dig(i)) v.push_back(i);

            i++;
        }

        cout << v[v.size()-1] << endl;
        
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  20-January-2024  21:45:24
*/ 
 
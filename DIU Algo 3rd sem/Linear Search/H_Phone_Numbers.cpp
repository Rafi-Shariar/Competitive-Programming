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


//https://codeforces.com/contest/1060/problem/A
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        int c = 0;

        for(auto i : s){

            if( i == '8') c++;
        }

        int pos = s.size() / 11;

        cout << min(pos,c) << endl;


        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  01-February-2024  21:34:35
*/ 
 
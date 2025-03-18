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


//https://codeforces.com/contest/1927/problem/A
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        int i = 0 , j = n-1;

        while (s[i] != 'B') i++;

        while (s[j]!='B') j--;

        cout << j-i + 1 << endl;
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  08-February-2024  22:28:30
*/ 
 
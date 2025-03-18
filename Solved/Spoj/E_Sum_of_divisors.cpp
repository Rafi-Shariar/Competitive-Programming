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

//https://vjudge.net/contest/579458#problem/E
const int N = 1e6+2;
vector<int>sums(N);

void precal(){

    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j+=i)
        {
            sums[j] += i;
        }
        
    }
    
}
bool prime(int n){

    if( n <=1) return false;

    for (int i = 2; i*i <= n; i++)
    {
        if( n%i==0) return false;
    }

    return true;
    
    
}
int main()
{
    fast
    precal();

    debug(sums);

    int t=1;
    cin>>t;

    while (t--)
    {
        int l , r;
        cin >> l >> r;
        int c = 0;

        for (int i = l; i <= r; i++)
        {
            if( prime( sums[i])) c++;
        }

        cout << c << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  10-February-2024  13:45:58
*/ 
 
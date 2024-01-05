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


//https://www.hackerrank.com/contests/projecteuler/challenges/euler006/problem
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        ll n; cin >> n;

        ll per_squar = n*(n+1)*(2*n+1)/6;

        ll sum = n * (n+1)/2;

        sum = sum * sum;

        cout <<  sum - per_squar << endl;

    }
    

    return 0;
}
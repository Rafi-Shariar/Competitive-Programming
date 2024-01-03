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

//https://www.hackerrank.com/contests/projecteuler/challenges/euler034/problem
ll HI(ll i, vector<int>&v){

    ll sum = 0;

    while (i)
    {
        sum += v[ i % 10];
        i/=10;
    }

    return sum;
    
}
int main()
{
    fast

    vector<int>v(10);
    v[0] = 1;
    int cur = 1;

    for (int i = 1; i <= 9; i++)
    {
        v[i] = (cur*i);
        cur *= i;
    }

    int N; cin >> N;

    ll sum = 0;

    for (ll i = 10; i < N; i++)
    {
        ll sum_of_fac_i = HI(i,v);

        if( sum_of_fac_i % i == 0) sum += i;

        debug(i, sum_of_fac_i , sum);

    }

    cout << sum << endl;
    
    
    

    return 0;
}
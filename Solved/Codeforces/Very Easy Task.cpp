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

//https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
bool check(ll time, ll x , ll y, ll n){

    if( time < min(x,y)) return false;

    int c = 1;

    time -= min(x,y);

    c += time/x;
    c += time/y;

    return c >= n;


}
int main()
{
    fast

    ll n,x,y;
    cin >> n >> x >> y;


    ll low = 1, high = (max(x,y) * n);

    while( low <= high){

        ll mid = low + (high - low)/2;

        //cout <<low << " "<< mid <<" "<< high << "-->" << check( mid, x, y) << endl;

        if( check( mid, x, y , n)) high = mid - 1;
        else low = mid + 1;


    }

    cout << low << endl;


    return 0;
}
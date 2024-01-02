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


// 8 , 4, 2 , 6 
// 1   2  3   4 
//https://codeforces.com/problemset/problem/742/A
int main()
{
    fast

    int t=1;
    //cin>>t;

    int arr[] = {6, 8 , 4 , 2};

    ll a = 1378;

    int n; cin >> n;

    if( n == 0 ){
        cout << 1 << endl;
        return 0;
    }

    cout << arr[ n%4 ] << endl;



    return 0;
}
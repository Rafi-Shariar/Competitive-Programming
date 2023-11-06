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

//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
bool pal(int v[], int i, int j){

    if( i > j) return true;

    if( v[i] != v[j]) return false;


    return pal(v,i+1, j-1);
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        int v[n];
        for(int i=0; i<n; i++) cin >> v[i];

        int i=0, j = n-1;

        if( pal(v,i,j) ) cout << "YES" << endl;
        else cout << "NO" << endl;



        
    }
    

    return 0;
}
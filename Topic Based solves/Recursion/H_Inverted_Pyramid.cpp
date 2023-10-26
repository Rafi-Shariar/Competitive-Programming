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

//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/H
void fun( int n, int x){

    if( x < 0) return;

    for(int i = 0; i < n-x; i++ ) cout <<" ";

    for( int i = 0 ; i < (x*2)-1 ; i++ ) cout << "*";
    cout << endl;

    fun(n,x-1);


}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {

        int n ; cin >> n ;

        fun(n,n);
        
    }
    

    return 0;
}
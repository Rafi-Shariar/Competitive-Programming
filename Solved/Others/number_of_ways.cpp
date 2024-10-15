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


int pos( int s , int e){

    if( s == e) return 1;
    else if ( s > e) return 0;

    return pos(s+1 , e) + pos(s+2 , e) + pos(s+3 , e);
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int s,e;
        cin >> s >> e;;

        cout << pos(s,e) << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  16-February-2024  10:32:07
*/ 
 
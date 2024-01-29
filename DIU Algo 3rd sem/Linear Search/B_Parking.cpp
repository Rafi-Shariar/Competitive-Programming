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


//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=2349&mosmsg=Submission+received+with+ID+29162591
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        forin(v,n);

        sort(v);

        cout << 2 * abs(v[0] - v[n-1]) << endl;

    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  29-January-2024  18:44:42
*/ 
 
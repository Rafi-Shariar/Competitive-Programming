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


//https://codeforces.com/contest/1919/problem/A
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int a,b;
        cin >> a >> b;

        int diff = abs(a-b);

        if( diff % 2 == 0) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }
    

    return 0;
}
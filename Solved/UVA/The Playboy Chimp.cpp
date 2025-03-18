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


//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552
int main()
{
    //fast

    int n; cin >> n;
    vector<int>v(n);
    forin(v,n);

    int q; cin >> q;

    while (q--)
    {
        int x ; cin >> x;

        auto UP = upper_bound(v.begin(), v.end() , x) - v.begin();
        auto LB = lower_bound(v.begin(), v.end() , x) - v.begin();

        //cout << LB << " " << UP << endl;

        if( LB == 0) cout << "X ";
        else cout << v [LB-1] << " ";

        if( UP == n) cout << "X" << endl;
        else cout << v[UP] << endl;


    }
    

    

    return 0;
}



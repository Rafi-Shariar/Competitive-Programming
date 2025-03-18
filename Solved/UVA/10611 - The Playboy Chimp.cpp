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
    int n; cin >> n;
    vector<ll>v(n);
    forin(v,n);

    int q; cin >> q;

    while (q--)
    {
        ll target; cin >> target;

        auto UB = upper_bound(v.begin(), v.end(), target) - v.begin();

        int i = UB;
        ll a = -1, b = -1;

        if(i == n) i = i-1;

        while (i>=0)
        {
            if( v[i] < target){
                a = v[i];
                break;
            }
            i--;
        }

        // cout << i << " " << UB <<endl;

        
        if( a == -1) cout << "X";
        else cout << a ;

        if( (int)UB == n) cout << " X" <<endl;
        else cout <<" "<<v[(int)UB] <<endl;

        

    }
    
    

    return 0;
}
/*
find UB, if UB == n then b == X , else iterate from UP ans find the 1st lesser value, if its not available then a == X
*/
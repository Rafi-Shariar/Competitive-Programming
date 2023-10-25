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


//https://vjudge.net/contest/589783#problem/K
int main()
{
    //fast

    int t=1;
    cin>>t;

    for( int tt=1; tt<=t; tt++)
    {
        int x1, y1 , x2 , y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int m; cin>>m;

        printf("Case %d:\n",tt);

        while (m--)
        {
            int a,b;
            cin >> a >> b;

            if( x1 <= a && a <=x2 && y1 <= b && b <= y2) cout << "Yes" <<endl;
            else cout << "No" <<endl;
        }
        
        
    }
    

    return 0;
}
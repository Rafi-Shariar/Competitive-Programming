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


//https://vjudge.net/contest/576547#problem/W
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        deque<int>r,a;

        for(int i=1; i<=n; i++) r.push_back(i);

        for (int i = 0; i < n; i++)
        {
            if( !a.empty()){

                int last_ele = a.back();
                a.pop_back();
                a.push_front( last_ele);
            }

            int last_ele = r.back();
            r.pop_back();
            a.push_front(last_ele);
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] ;

            if( i < n-1) cout << " ";
        }
        
        cout << endl;
        
        
        
    }
    

    return 0;
}
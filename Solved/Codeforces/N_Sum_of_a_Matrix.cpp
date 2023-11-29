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

//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N

int main()
{
    fast

    int t=1;
   // cin>>t;

    while (t--)
    {

        int r,c;
        cin >> r >> c;

        int a[r][c], b[r][c],ans[r][c];

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
            
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> b[i][j];
            }
            
        }

     


        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << a[i][j] + b[i][j]<< " ";
            }
            cout << endl;
            
        }

        debug(a,b);
        
        
    }
    

    return 0;
}
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



int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int>a(n),b(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n; i++) cin >> b[i];

        sort(a);
        sort(b);

        for (int i = 0; i < n; i++)
        {
            if( a[i] != b[i]){
                cout << "no" << endl;
                return 0;
            }
        }

        cout << "yes" << endl;
        
      


        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  29-January-2024  21:29:05
*/ 
 
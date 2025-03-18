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
    cin>>t;

    while (t--)
    {
        string a,b;
        cin >> a >> b;

        int i=0 , j=0;

        int idx = min(a.size() , b.size());

        while ( i < idx)
        {
            cout << a[i];
            cout << b[i];
            i++;
        }

        if( a.size() > b.size()){

            while (i < a.size())
            {
                cout << a[i];
                i++;
            }
            cout << endl;
            
        }
        else if( a.size() < b.size()){

            while (i < b.size())
            {
                cout << b[i];
                i++;
            }

            cout << endl;
            
        }
        else cout << endl;
        

        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  30-January-2024  20:01:22
*/ 
 
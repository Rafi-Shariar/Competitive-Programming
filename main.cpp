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
    //fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        
        int x = 0;

        for (int i = 0; i < n; i++)
        {
           cin >> v[i];
           if( i > 0 && v[i-1] < v[i]) x++;

        }

        vector<int>a,b;
        a.push_back(v[0]);

        int big = v[0];

        for (int i = 1; i < n; i++)
        {
            if( v[i] > big) b.push_back(v[i]);
            else
            {
                if( (i+1 < n) && v[i] <= v[i+1] && v[i+1] <= big)
                {
                    a.push_back( v[i+1]);
                    b.push_back(v[i]);
                    i++;
                }
                else b.push_back(v[i]);

            }
            
        }

        int c = 0;

        debug(a,b);

        if( a.size() > 1){

            for (int i = 1; i < a.size(); i++)
            {
                if( a[i] > a[i-1]) c++;
            }
            
        }

        if( b.size() > 1){

            for (int i = 1; i < b.size(); i++)
            {
                if( b[i] > b[i-1]) c++;
            }
            
        }

        cout << min(x,c) << endl;





        


    }
    

    return 0;
}
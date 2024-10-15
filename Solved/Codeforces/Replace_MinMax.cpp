#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);



int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);

        int minn = 1e6 , maxx = -1e6;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            minn = min(minn , v[i]);
            maxx = max(maxx , v[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if( v[i] == minn) v[i]  = maxx;
            else if( v[i] == maxx) v[i] = minn;
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        
        


        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  15-October-2024  19:24:55
*/ 
 
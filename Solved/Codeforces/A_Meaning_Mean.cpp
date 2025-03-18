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
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v);

        int res =( v[0] + v[1] ) / 2;

        for (int i = 2; i < n; i++)
        {
            res = ( res + v[i]) / 2;
        }

        cout << res << endl;
        


        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  16-October-2024  14:59:52
*/ 
 
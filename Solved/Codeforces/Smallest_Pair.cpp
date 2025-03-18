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
        vector<int>v(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        int smallest = INT_MAX;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i+1; j <= n; j++)
            {
                int res = v[i] + v[j] + j - i;

                smallest = min(smallest,res);
            }
            
        }

        cout << smallest << endl;
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  15-October-2024  18:52:45
*/ 
 
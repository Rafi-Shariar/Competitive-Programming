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
        
        map<int,int>mp;
        int smallest = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int a; cin >> a;
            mp[a] ++;
            smallest = min(smallest , a);
        }

        if( mp[smallest] % 2 == 0) cout << "Unlucky" << endl;
        else cout << "Lucky" << endl;


        
    
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  15-October-2024  18:56:40
*/ 
 
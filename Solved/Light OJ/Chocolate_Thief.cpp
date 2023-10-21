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


//https://lightoj.com/problem/chocolate-thief
int main()
{
    //fast

    int t=1;
    cin>>t;

    for (int tt = 1; tt <=t; tt++)
    {
        int n; cin>>n;
        map<int,string>mp;

        int minn = INT16_MAX, mx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            string s; int a,b,c;
            cin >> s >> a >> b >> c;
            int volume = a * b * c;

            mp[volume] = s;
            minn = min(minn,volume);
            mx = max(mx, volume);
         
        }

        printf("Case %d: ",tt);

        if(mp.size()==1) cout<< "no thief" <<endl;
        else
        {
            cout<<mp[mx]<<" took chocolate from "<<mp[minn]<<endl;
           
            
        }
        

     
        
    }
    

    return 0;
}
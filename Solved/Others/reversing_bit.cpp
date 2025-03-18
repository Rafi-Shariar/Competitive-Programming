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


//https://vjudge.net/contest/569452#problem/S
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int a; 
        cin >> a;

        int bits[32] = {0};

        for (int i = 0; i < 32; i++)
        {
            if( (a >> i) & 1 ) bits[i] = 1;
        }

        reverse(bits, bits+32);

       unsigned int ans = 0;

       for (int i = 0; i < 32; i++)
       {
          if ( bits[i] ) ans += (1 << i);
       }

       cout<<ans<<endl;
       
        
        

        

    }
    

    return 0;
}
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

//https://atcoder.jp/contests/abc336/tasks/abc336_b

int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;

        int bits[32] = {0};

        for(int i = 0; i < 32; i++)
      {
        if( (n >> i) & 1 ) bits[i] = 1;
      }

      int c = 0;

      for (int i = 0; i < 32; i++)
      {
         if( bits[i] == 0) c++;
         else break;
      }

      cout << c << endl;
      
        
    }
    

    return 0;
}
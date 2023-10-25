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


//https://www.codechef.com/START105D/problems/CHEAT
int main()
{
    fast

      vector<int>v(1010,0);

      v[2] = 1;

      for(int i = 2; i<1010; i+=7) v[i] = 1;
      

    int t=1;
    cin>>t;
  

    while (t--)
    {
        int n; cin >> n;

        int c = 0;

        for (int i = 1; i <= n; i++)
        {
            if( v[i]) c++;
        }

        cout << c <<endl;
        
       

        
        
    }
    

    return 0;
}
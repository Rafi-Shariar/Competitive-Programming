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


//https://toph.co/p/buildings
int main()
{
    fast

   int n,k;
   cin >> n >> k;

   vector<int>v(n);
   forin(v,n);

   sort(v);

   int mn = v[0];
   int mx = v[v.size()-1];


   int low = 0, high = mx + k;

   while (low <= high)
   {
      int mid = (low + high)/2;
      int cur = 0;

      for (int i = 0; i < n; i++)
      {
         if( v[i] < mid) cur += mid - v[i];
      }

      if( cur <= k) low = mid + 1;
      else high = mid - 1;
      

   }

   cout << low-1 << endl;

   

   

    return 0;
}
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


//https://vjudge.net/contest/589783#problem/O
int main()
{
   ll n;

   while ( cin >> n)
   {

    if( n < 0) break;

    if( n==0){
        cout << 0 <<endl;
        continue;
    }
       

   vector<int>v;

   while (n)
   {
     v.push_back( n%3);
     n/=3;
   }

   reverse(v.begin(), v.end());

   for(auto i : v) cout << i;
   cout <<endl;
   
   }
   

    

    return 0;
}
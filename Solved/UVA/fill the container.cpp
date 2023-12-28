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



int check( int n, vector<int>&v){

    int sum = 0, c = 1;

    for (int i = 0; i < v.size(); i++)
    {
        if( sum + v[i] > n){
            c++;
            sum = v[i];
        } 
        else sum += v[i];
    }

    return c;
    

}
int cap(vector<int>&v , int d){

    int t =0, mx = INT_MIN;

    for (int i = 0; i < v.size(); i++)
    {
        t += v[i];
        mx = max(mx,v[i]);
    }

    int low = mx, high = t;

    while (low <= high)
    {
        int mid = low + (high - low )/2;

        int c = check(mid, v);

        if( c <= d) high = mid - 1;
        else low = mid + 1;
    }

    return low;
    
    
    
}
int main()
{
    fast

   int n,m;
   
   while (cin >> n >> m)
   {
      vector<int>v(n);
      forin(v,n);

      cout << cap(v,m) << endl;
   }
   
    

    return 0;
}
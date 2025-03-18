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

//https://codeforces.com/problemset/problem/17/A
const int N=1e6;
bool marked[N];
vector<int>v;

void sieve(int n) {


    v.push_back(2);
    marked[0] = marked[1] = true;
    for( int i = 4; i<N; i+=2) marked[i] = true;

    for (int i = 3; i <= n; i+=2) {
        if (!marked[i]) {
            v.push_back(i);
            for (int j = i * 2; j < n; j += i) {
                marked[j] = true; 
            }
        }
    }

    return;
}

int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
      int n; cin >> n;
      int k; cin >> k;
      sieve(n);

      int c = 0;

      for (int i = 0; i < v.size()-1; i++)
      {
         int now = v[i] + v[i+1] + 1;

         if( !marked[now] && now <= n) c++;
      }

      if( c >= k) cout << "YES" << endl;
      else cout << "NO" << endl;
      
        

        
    }
    

    return 0;
}
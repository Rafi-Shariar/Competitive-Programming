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

int c  = 0;
int hey(int n){

    if( n == 1) return c+1;

    if( n % 2 == 0){
        c++;
        hey(n/2);
    }
    else{
        c++;
        hey( 3*n + 1);
    }
}
int main()
{
    fast

  int n; cin >> n;

  cout << hey (n) << endl;

    return 0;
}
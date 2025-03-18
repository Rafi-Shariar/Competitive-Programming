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


//https://www.codechef.com/problems/ODDPAIRS
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        ll n; cin >> n;

        ll odd,even;

        if( n%2==1){
            even = n/2;
            odd = n/2 + 1;
        }
        else
        {
            even = n/2;
            odd = n/2;
        }

        cout << (even*odd) * 2 <<endl;
        

        
    }
    

    return 0;
}
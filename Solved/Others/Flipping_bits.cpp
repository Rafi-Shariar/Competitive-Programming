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


//https://www.hackerrank.com/challenges/flipping-bits/problem
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        unsigned int n ; cin>>n;

        for (int i = 0; i < 32; i++)
        {
           n = n ^ ( 1 << i);
        }

        cout<<n<<endl;
        


    }
    

    return 0;
}
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



int maxx = INT_MIN;

void fun(int n){

    int c = 0;

    while (n!=1)
    {
        if( n % 2 == 1) n = (3*n) + 1;
        else n/=2;

        c++;
    }

    maxx = max(maxx, c);


    
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        for (int i = 201; i <=210; i++)
        {
            fun(i);
        }

        cout<<maxx<<endl;
        
        
    }
    

    return 0;
}
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

//https://vjudge.net/contest/589783#problem/L
int fun(int n){

    int c = 0;

    while (n!=1)
    {
        if( n % 2 == 1) n = (3*n) + 1;
        else n/=2;

        c++;
    }

    return c;

}
int main()
{
    int a,b;

    while (cin >> a >> b)
    {
        int x = a, y = b;

        if( x > y) swap (x , y);

        int maxx = 0;

        for (int i = x; i <= y; i++) maxx = max (maxx, fun(i)+1);

        cout << a <<" " << b << " " << maxx <<endl;
        
    }
    

    return 0;
}
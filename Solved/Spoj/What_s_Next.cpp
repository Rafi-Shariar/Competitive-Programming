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


//https://www.spoj.com/problems/ACPC10A/en/
int main()
{
    fast

    int a,b,c;

    while (cin >> a >> b >> c)
    {
        if(!a && !b && !c) break;

        if( (b-a) == (c-b)) cout << "AP " << c+ (c-b) << endl;
        else cout << "GP " << c * (c/b) << endl; 
    }
    

    return 0;
}
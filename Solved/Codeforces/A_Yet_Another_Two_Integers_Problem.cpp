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

//https://codeforces.com/problemset/problem/1409/A

int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n,m; cin >> n >> m;

        int dif = abs(n-m);

        int c = 0;

        while(dif){

            c += dif/10; dif%=10;
            c += dif/9; dif%=9;
            c += dif/8; dif%=8;
            c += dif/7; dif%=7;
            c += dif/6; dif%=6;
            c += dif/5; dif%=5;
            c += dif/4; dif%=4;
            c += dif/3; dif%=3;
            c += dif/2; dif%=2;
            c += dif/1; dif%=1;
       
        }

        cout << c << endl;

        
    }
    

    return 0;
}
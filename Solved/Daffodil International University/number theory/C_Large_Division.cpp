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


//https://vjudge.net/contest/603667#problem/C
int main()
{
   // fast

    int t=1;
    cin>>t;

    int Case = 1;

    while (t--)
    {
        string a,b;
        cin >> a >> b;

        int div = stoi(b);

        if( div <= 0 ) div = div * -1;

        int i = 0;

        if(a[0] == '-') i++;

        ll ans = 0;

        while (i < a.size())
        {
            int dig = (a[i] - '0');
            ans = (ans * 10) + dig;

            if( ans >= div) ans = ans % div;

            i++;
        }


        printf("Case %d: ",Case++);

        if( ans ) cout << "not divisible" << endl;
        else cout << "divisible" << endl;
        
        
    }
    

    return 0;
}

/*

ans = 0 --> 1 - ans:1
ans = 1 --> 2 - 1*10 + 2 = 12
ans = 12 --> 3 - (12 * 10) + 3 = 123 " ans*10 + dig"

*/
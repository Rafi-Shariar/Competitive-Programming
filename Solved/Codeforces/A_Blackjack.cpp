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

//https://codeforces.com/problemset/problem/104/A

int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        

        int arr[12];
        arr[0] = 0;

        arr[1] = 4;

        for (int i = 2; i <= 10; i++)
        {
            arr[i] = 4;
        }

        arr[10] = 15;
        arr[11] = 4;

        int n; cin >> n;

        int res = n - 10;

        if( res > 11 || n < 10){
            cout << 0 << endl;
            return 0;
        }

        cout << arr [ res] << endl;



        
    }
    

    return 0;
}
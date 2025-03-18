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

ll mod = 1073741824;
int arr[1000009];
//https://codeforces.com/problemset/problem/236/B
int main()
{
    fast

    int a, b, c;
    cin >> a >> b >> c;

    ll sum = 0;
    

    for (int i = 1; i <=1000000; i++)
    {
        for (int j = i; j <= 1000000; j+=i)
        {
            arr[j]++;
        }
        
    }
    

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                sum += arr[i*j*k];
            }
            
        }
        
    }

    cout << sum % mod << endl;

    

    return 0;
}
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

//https://codeforces.com/problemset/problem/26/Aas
bool is_prime(int num){

   if (num <= 1)return false; 
   if (num <= 3) return true;
   if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
    
}
bool check(int n){

    int c = 0;

    for (int i = 1; i <= n; i++)
    {
        if( n % i == 0){

            if(is_prime(i)) c++;
        }
    }

    return c == 2;
    
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        int c = 0;

        for (int i = 1; i <= n; i++)
        {
            if( check(i) ) c++;
        }

        cout << c << endl;
        
        
    }
    

    return 0;
}
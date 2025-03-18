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

//https://codeforces.com/problemset/problem/1454/A

int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;

        if( n % 2 == 0){

            int odd = n-1 , even = 2;

            for (int i = 1; i <= n; i++)
            {
                if( i % 2 == 1){
                    cout << even << " ";
                    even+=2;
                }
                else
                {
                    cout << odd << " ";
                    odd -= 2;
                }
                
            }

            cout << endl;
            
        }
        else
        {
           int odd = n , even = 2;

            for (int i = 1; i <= n-1; i++)
            {
                if( i % 2 == 1){
                    cout << even << " ";
                    even+=2;
                }
                else
                {
                    cout << odd << " ";
                    odd -= 2;
                }
                
            }

            cout << "1" <<endl;
        }
        
    }
    

    return 0;
}
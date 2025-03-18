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


//https://codeforces.com/contest/1931/problem/A
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        bool found = false;

        for (int i = 1; i <= 26; i++)
        {
            for (int j = 1; j <= 26; j++)
            {
               
                for (int k = 1; k <= 26; k++)
                {
                    int now = i + j + k;
        

                    if( now == n && !found){

                        char x = 96 + i;
                        char y = 96 + j;
                        char z = 96 + k;

                        cout << x << y << z << endl;
                        found = true;
                                            
                    }

                    if( found) break;
                }

                if( found) break;
                
            }
            
        }
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  13-February-2024  20:41:00
*/ 
 
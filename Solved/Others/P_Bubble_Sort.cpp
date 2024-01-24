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


//https://vjudge.net/problem/HackerRank-ctci-bubble-sort/origin
int main()
{
    //fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        forin(v,n);

        int c = 0;

        for (int i = 0; i < n; i++)
        {
           for (int j = 0; j < n-1; j++)
           {
              if( v[j] > v[j+1]){
                swap(v[j], v[j+1]);
                c++;
              } 
           }
           
        }

        printf("Array is sorted in %d swaps.\n",c);
        cout << "First Element: "<<v[0]<<endl;
        cout << "Last Element: "<<v[n-1]<<endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  23-January-2024  00:28:33
*/ 
 
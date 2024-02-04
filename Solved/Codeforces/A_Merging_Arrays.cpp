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


//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int>a(n) , b(m);
        forin(a,n);
        forin(b,m);

        int i=0 , j= 0;

        vector<int>ans;

        while (i < n || j < m)
        {
            if( i == n && j < m){
                ans.push_back(b[j]);
                j++;
           
            }
            else if( j == m && i < n){

                ans.push_back(a[i]);
                i++;
            }
            else if( a[i] <= b[j]){

                ans.push_back(a[i]);
                i++;

            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }

       // cout << i << " " << j << endl;

        for(auto i : ans) cout << i << " ";
        cout << endl;
        


        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  02-February-2024  12:33:05
*/ 
 
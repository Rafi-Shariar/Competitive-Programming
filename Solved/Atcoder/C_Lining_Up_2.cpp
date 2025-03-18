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


//https://atcoder.jp/contests/abc337/tasks/abc337_c
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n+1] = {0};

        vector<int>ans;

        int now = 0;

        for (int i = 0; i < n; i++)
        {
            int idx;
            cin >> idx;

            if(idx == -1){
                ans.push_back(i+1);
                now = i+1;
            }
            else
            {
                arr[idx] = i+1;
            }
            
        }



        while (ans.size() < n)
        {
            int p = arr[now];
            ans.push_back(p);
            now = p;
        }

        for(auto i : ans) cout << i << " ";
        cout << endl;

        
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  20-January-2024  18:34:18
*/ 
 
#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);



int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<ll>v(n+1);
        vector<ll>v_sorted(n+1);

        v[0] = v_sorted[0] = 0;
        
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
           v_sorted[i] = v[i];
        }

        v[0] = v_sorted[0] = 0;

        sort(v_sorted);

        for (int i = 1; i <= n; i++)
        {
            v[i] = v[i] + v[i-1];
            v_sorted[i] = v_sorted[i] + v_sorted[i-1];

           // cout << v_sorted[i] << " ";
        }
        

        int q; cin >> q;
        while (q--)
        {
            int m,l,r;
            cin >> m >> l >> r;

            if(m==1){

                cout << v[r] - v[l-1] << endl;

            }
            else
            {
                cout << v_sorted[r] - v_sorted[l-1] << endl;
                
            }
            
        }
        


        

        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  22-October-2024  18:11:07
*/ 
 
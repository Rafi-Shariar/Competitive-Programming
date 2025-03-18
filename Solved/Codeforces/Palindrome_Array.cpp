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
        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int i = 0 , j = n-1;

        while (i < j)
        {
            if(v[i] != v[j]){
                cout << "NO" << endl;
                return 0;
            }
            i++;
            j--;
        }
        

        cout << "YES" << endl;
        
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  15-October-2024  17:47:33
*/ 
 
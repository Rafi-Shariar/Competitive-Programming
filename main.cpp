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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int target; cin >> target;

        for (int i = 0; i < n; i++)
        {
            if( arr[i] == target){

                cout << i << endl;
                return 0;

            }
        }

        cout << -1 << endl;
    
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  15-October-2024  16:27:44
*/ 
 
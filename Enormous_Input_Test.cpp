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
    int k , count = 0;
    cin>>t >> k;


    while (t--)
    {
        int a; cin >> a;
        if( a % k == 0) count++;
        
    }

    cout << count << endl;
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  18-October-2024  15:31:32
*/ 
 
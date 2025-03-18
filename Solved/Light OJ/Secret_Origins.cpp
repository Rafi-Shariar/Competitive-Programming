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


//https://lightoj.com/problem/secret-origins
int main()
{
    //fast

    int t=1,tt=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        string s;
  

        for (int i = 31; i >= 0; i--)
        {
            if( (n >> i) & 1) s.push_back('1');
            else s.push_back('0');
        }

        debug(s);

      
        next_permutation(s.begin(), s.end());

        debug(s);


        int number = 0;
        int mul=1;

        for (int i = 31; i >= 0; i--)
        {
            if( s[i] == '1'){
                number += mul;
            }
            mul*=2;
        }

        printf("Case %d: ",tt++);

        cout << number << endl;
        

        
    }
    

    return 0;
}
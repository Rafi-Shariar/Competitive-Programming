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



int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;

        string a, b;
        cin >> a >> b;

        int aa = 0 , bb = 0;


        for (int i = 0; i < n; i++)
        {
            if(b[i]=='1' && a[i]=='0'){
                a[i] = '1';
                aa++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if(a[i] != b[i]) bb++;
        }

        cout << max(aa,bb) << endl;
        




        



        
      
        
    }
    

    return 0;
}
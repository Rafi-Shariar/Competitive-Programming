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

const int sz = 5;
void dekhi_hoykina(int i, vector<int>&v,int &sum, bool &ok){

    if( i == 5){
        if( sum == 23 ) ok = true;
        return;
    }

    sum+=v[i];
    dekhi_hoykina( i+1, v, sum, ok);
    sum -= v[i];

    sum -= v[i];
    dekhi_hoykina(i+1, v,sum,ok);
    sum += v[i];

    sum *= v[i];
    dekhi_hoykina(i+1, v, sum, ok);
    sum /= v[i];
}
int main()
{
    fast

    int x = 25;

    {
        vector<int>v(5);
        int zero = 0;

        for (int i = 0; i < 5; i++)
        {
            cin >> v[i];
            if( v[i] == 0) zero++;
        }

        if( zero == 5) break;

        sort(v);

        int target = 23;


        bool ok = false;
        int sum = 0;

        dekhi_hoykina(0, v, sum, ok);

        while (next_permutation(v.begin(), v.end()))
        {
            dekhi_hoykina(0, v, sum, ok);

            if( ok) break;
        }
        

        if( ok ) cout << "Possible\n";
        else cout << "Impossible\n";

      
        


        
    }
    

  
    
    

    return 0;
}
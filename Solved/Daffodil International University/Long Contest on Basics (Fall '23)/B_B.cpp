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


//https://vjudge.net/contest/589783#problem/B
int main()
{
    //fast

    int t=1;
    scanf("%d",&t);

    for (int tt=1; tt<=t; tt++)
    {
        ll p,l;
        scanf("%lld %lld",&p,&l);


        ll q = p - l;

        printf("Case %d: ",tt);

        vector<ll>v;

         for (ll i=1; i*i<=q; i++) 
       { 
        if (q%i == 0) 
        { 
            if (q/i == i){
            v.push_back(i);
            } 
            else{
                v.push_back(i); 
                v.push_back(q/i);
            }
        } 
       }


        sort(v);

        bool pos = false;

        for(int i=0; i<v.size(); i++){

             if( v[i] > l){

                printf("%lld ", v[i]);
                pos = true;
            }
 
        }

        if(!pos) printf("impossible\n");
        else printf("\n");


    }
    

    return 0;
}
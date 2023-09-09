#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   ll n,k,l,r,s_all,s_k;
   cin>>n>>k>>l>>r>>s_all>>s_k;

   vector<ll>v(n+1 ,r);

   ll sum = 0;

   for(ll i=1; i<=k; i++) sum+=v[i];
 
   if(sum != s_k){

    ll dif = sum -s_k;


    ll i=k;

    while (dif && i>=1)
    {
        v[i]--;
        dif--;
        i--;

        if(i==0 && dif>0) i = k;
    }

   }

    ll res = s_all - s_k;

    ll sum_res = 0;
    for( ll i = k+1; i<=n; i++) sum_res += v[i];

    if(sum_res != res){

    ll j = k+1;
    ll mk = sum_res - res;

    while (mk && j<=n)
    {
        v[j]--;
        mk--;
        j++;

        if(j>n && mk>0) j = k+1;

    }

    }


    for( ll i=1; i<=n; i++) cout<<v[i]<<" ";
    cout<<endl;
    


    return 0;
}
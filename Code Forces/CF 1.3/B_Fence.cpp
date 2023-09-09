#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  ll n,k;
  cin>>n>>k;
  vector<ll>v(n+1);


  for(ll i=0; i<n; i++) cin>>v[i];

  ll i=0,j=0;
  ll sum=0;
  ll s = INT_MAX;
  ll idx ;

  while (j<n)
  {
    sum += v[j];

    if(j<k-1) j++;
    else
    {
       //cout<<sum<<" "<<j<<endl;
        if(sum<s){
            s = sum;
            idx = i+1;
        }

        sum -= v[i];
        i++;
        j++;
    }
    

  }

  cout<<idx<<endl;
  
    


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 
  int n; cin>>n;
 
  int sum_a=0,sum_b=0,sum_c=0;
  int a,b,c;
 
 
  while (n--)
  {
    cin>>a>>b>>c;
 
    sum_a += a;
    sum_b += b;
    sum_c += c;
    
  }
 
  
 
  if(sum_a==0 && sum_b==0 && sum_c==0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  
    
 
 
    return 0;
}
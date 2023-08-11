#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n; cin>>n;

  if(n==1) cout<<1<<endl;
  else{
    cout<<n<<" ";

    for(int i = 1; i<=n-1; i++) cout<<i<<" ";
    cout<<endl;
  }
    


    return 0;
}
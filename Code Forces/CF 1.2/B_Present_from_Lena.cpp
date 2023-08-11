#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n; cin>>n;

  for (int i = -n; i <= n; i++)
  {
     int v = n - abs(i);

     for(int j = 0; j< abs(i); j++) cout<<"  ";

     for(int j = 0; j< v; j++) cout<<j<<" ";

     for(int j = v; j>0; j--) cout<<j<<" ";

    
     cout<<0<<endl;
  }
  
    


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n;
  cin>>n;
  vector<int>v(n);
  int zero =0;
  int five = 0;

  for(int i=0; i<n; i++){
    cin>>v[i];
    if( v[i]==5) five++;
    else zero++;
  }

  if(zero==0) cout<<-1<<endl;
  else if(five<9) cout<<0<<endl;
  else
  {
    int x = five%9;
    five -= x;

    for (int i = 0; i < five; i++) cout<<5;

    for(int i=0; i<zero; i++) cout<<0;

    cout<<endl;
    

  }
  



    


    return 0;
}
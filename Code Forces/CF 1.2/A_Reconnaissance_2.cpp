#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n; cin>>n;
  vector<int>v;

  for (int i = 1; i <= n; i++)
  {
     int a; cin>>a;
     v.push_back(a);
  }

  int mn = abs(v[0]-v[1]);
  int id1= 1;
  int id2 = 2;

  for (int i = 1; i < n-1; i++)
  {
     int cur = abs( v[i]- v[i+1]);

     if(cur<mn){
        mn = cur;
        id1 = i+1;
        id2 = i+2;
     }
  }

  int tmp = abs(v[n-1] - v[0]);

  if(tmp<mn){

    id1 = n;
    id2 = 1;

  }

  cout<<id1<<" "<<id2<<endl;
  

  
    


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int page; cin>>page;
  vector<pair<int,int>>v;

  for (int i = 1; i <= 7; i++)
  {
    int a; cin>>a;
    v.push_back({a,i});
  }

  int sum = 0;
  int i=0,idx=0;

  while (sum<page)
  {
    sum += v[i].first;
    idx = v[i].second;
    i++;

    if(i==7) i=0;

  }

  cout<<idx<<endl;
  
  
    


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  double r,x,y,x2,y2;
  cin>>r>>x>>y>>x2>>y2;

  double dis = sqrt( pow(x2-x,2) + pow(y2 - y, 2));


  cout<<ceil(dis/(2*r))<<endl;
    


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int n,m;
  cin>>n>>m;
  int c=0;
  
  while (m!=n)
  {
    if(m>n){

        if(m%2==0){
            m/=2;
        }
        else m++;
    }
    else m++;
    c++;
  }

  cout<<c<<endl;
  
  
}
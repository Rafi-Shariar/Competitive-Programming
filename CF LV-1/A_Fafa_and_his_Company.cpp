#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n; cin>>n;
  int c=0;

  for (int i = 1; i < n; i++)
  {
     if(n%i==0) c++;
  }

  cout<<c<<endl;
  
    


    return 0;
}
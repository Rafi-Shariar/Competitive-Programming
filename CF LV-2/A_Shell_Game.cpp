#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n,p;
  cin>>n>>p;

  n = n%6;


  while (n)
  {
   
   if(n%2==0){

    if(p==2) p = 1;
    else if(p==1) p = 2;
   }else
   {
      if(p==0) p = 1;
      else if (p==1) p = 0; 
   }
   n--;
   
    
  }

  cout<<p<<endl;
  


    return 0;
}
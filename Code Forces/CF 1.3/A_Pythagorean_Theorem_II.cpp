#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;

   int c=0;

   for (int i = 1; i <= n; i++)
   {
      for (int j = i; (i*i) + (j*j) <= (n*n) ; j++)
      {
          double cur = (i*i) + (j*j);

          int a = sqrt(cur);
          int b = sqrt(cur);

          if(a*b == cur)c++;
      }
      
   }

   cout<<c<<endl;
   
    


    return 0;
}
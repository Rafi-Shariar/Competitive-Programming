#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int count(int n){
    int c=1;

    while (n!=1)
    {
        if(n&1) n = (3*n) + 1;
        else n= n/2;

        c++;
    }
    
    return c;
}
int main(){

   int n,m;

   while (cin>>n>>m)
   {

   cout<<n<<" "<<m<<" ";

   int mx=INT_MIN;
   int ans = 0;

   if(n>m) swap(n,m);
 
   for (int i = n; i <=m; i++)
   {
      int tmp = count(i);
      mx = max(mx,tmp);

   }

   cout<<mx<<endl;

   }
   

    return 0;
}
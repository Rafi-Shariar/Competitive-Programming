#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define forin(x,n)  for(int i=0; i<n; i++) cin>>x[i];
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif

//https://codeforces.com/contest/1475/problem/A
bool isPowerOfTwo(long long int n)
{
    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
}
int main(){
 
   int t; cin>>t;
   while (t--)
   {
     long long int n; cin>>n;
 
     if(isPowerOfTwo(n)) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
 
 
   }
   
    
 
 
    return 0;
}
/*

 if ceil(log2(n)) == floor(log2(n)) then n has odd divisor

*/
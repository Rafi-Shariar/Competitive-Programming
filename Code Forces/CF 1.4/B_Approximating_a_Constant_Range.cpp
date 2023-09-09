#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;
   vector<int>v(n);
   for(int i=0; i<n; i++) cin>>v[i];

   int ans = 0;
   multiset<int>s;
   int j=0;

   for (int i = 0; i < n; i++)
   {
     s.insert(v[i]);
     int mx = *s.rbegin();
     int mn = *s.begin();

     int dif = mx - mn;

     while (dif>1)
     {
        s.erase(s.find(v[j]));
        mx = *s.rbegin();
        mn = *s.begin();

        dif = mx - mn;
        j++;
     }

     ans = max(i-j,ans);
     
   }

   ans++;
   cout<<ans<<endl;
   


    return 0;
}
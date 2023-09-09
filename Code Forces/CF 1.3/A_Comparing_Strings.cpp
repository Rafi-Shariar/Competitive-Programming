#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   string a,b;
   cin>>a>>b;

   vector<int>dif;

   for (int i = 0; i < a.size(); i++)
   {
     if(a[i] != b[i]) dif.push_back(i);
   }

   if(dif.size() != 2){
    cout<<"NO"<<endl;
    return 0;
   }
   
   swap(a[dif[0] ], a[dif[1]]);

   if(a==b) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

   


    return 0;
}
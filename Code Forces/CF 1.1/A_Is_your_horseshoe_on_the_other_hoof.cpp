#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   set<int>st;

   for (int i = 0; i < 4; i++)
   {
     int a; cin>>a;
     st.insert(a);
   }

   cout<<4-st.size()<<endl;
   
    


    return 0;
}
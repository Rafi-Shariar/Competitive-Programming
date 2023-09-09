#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n,q;
   cin>>n>>q;

   string s; cin>>s;

   while (q--)
   {
     int idx; char c;
     cin>>idx>>c;

     s[idx-1] = c;

     stack<char>st;

     int cn = 0;

     for (int i = 0; i < n; i++)
     {
      
      if(s[i]=='.'){

        if(st.empty()) st.push(s[i]);
        else cn++;
      }
      else
      {
        if(!st.empty()) st.pop();
      }
      

     }

     cout<<cn<<endl;
     
   }
   
    


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   string s; cin>>s;

   for (int i = 0; i < s.size(); i++)
   {
     char c = s[i];

     if(c=='H'){
        cout<<"YES"<<endl;
        return 0;
     }

     if(c=='Q'){
         cout<<"YES"<<endl;
        return 0;
     }

      if(c=='9'){
         cout<<"YES"<<endl;
        return 0;
     }
   }

   cout<<"NO"<<endl;
   

    


    return 0;
}
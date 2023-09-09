#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   string s; cin>>s;
   int freq[27]={0};

   for (int i = 0; i < s.size(); i++)
   {
      freq [ s[i] - 'a']++;
   }

   ll odd=0;

   for (int i = 0; i <=26; i++)
   {
      if( freq[i] %2==1) odd++;
   }

   if(odd<=1) cout<<"First"<<endl;
   else{
      if( odd % 2==1) cout<<"First"<<endl;
      else cout<<"Second"<<endl;

   }
   
    


    return 0;
}
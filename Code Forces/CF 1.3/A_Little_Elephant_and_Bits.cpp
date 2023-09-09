#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   string s; cin>>s;

   if(s.find('0') != -1 ){

    s.erase(s.find('0') , 1);
    cout<<s<<endl;
   }
   else
   {
    s.erase(s.find('1'),1);
    cout<<s<<endl;
   }
   

    


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char ch ; 
char A(string a,char c){

    int i=0;
    while (a[i]!=c)
    {
        i++;
    }

    if(ch=='R') return a[i-1];
    else return a[i+1];
    
}
int main(){

  string a = "qwertyuiop";
  string b = "asdfghjkl;";
  string c = "zxcvbnm,./";

  cin>>ch;
  string s; cin>>s;

  string ans;

  for (int i = 0; i < s.size(); i++)
  {
    char x = s[i];

    if(a.find(x) != string :: npos) s[i] = A(a,x);
    if(b.find(x)!= string :: npos) s[i] = A(b,x);
    if(c.find(x)!= string :: npos) s[i] = A(c,x);
  }

  cout<<s<<endl;
  


    return 0;
}
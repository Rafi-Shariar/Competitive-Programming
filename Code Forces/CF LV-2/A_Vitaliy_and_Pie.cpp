#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

     
    int n; cin>>n;
    int sz = 2*n - 2;
    string s; cin>>s;

    map<char, int>mp;
    int c=0;

    for (int i = 0; i < sz; i+=2)
    {
       mp[s[i]]++;
       char ch = (s[i+1] - 'A' ) + 'a';

       if(mp.find(ch) != mp.end()){

        if(mp[ch]>0 ) mp[ch]--;
        else c++;
       }
       else c++;
       
    }

    cout<<c<<endl;
    

    


    return 0;
}
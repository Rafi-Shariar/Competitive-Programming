#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    string a,b;
    getline(cin,a);
    getline(cin,b);

    map<char,int>mp;

    for(int i=0; i<a.size(); i++) mp[a[i]]++;

    for (int i = 0; i < b.size(); i++)
    {
        if( mp[b[i]]>0 || b[i]==' ') {
            mp[b[i]]--;
            continue;
        }
        else{

            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    
    


    return 0;
}
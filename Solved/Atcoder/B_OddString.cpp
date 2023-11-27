#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    string s; cin>>s;

    vector<char>v;

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        if(i%2==0 || i==0) v.push_back(ch);

    }

    for( auto i : v) cout<<i;
    cout<<endl;
    


    return 0;
}
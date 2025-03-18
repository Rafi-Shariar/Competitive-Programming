#include<bits/stdc++.h>
using namespace std;
//https://atcoder.jp/contests/abc150/tasks/abc150_b
int main(){

    int n; cin>>n;
    string s;
    cin>>s;

    string com = "ABC";
    int c=0;

    for (int i = 0; i < n; i++)
    {
        string tmp;
        for (int j = i; j < i+3; j++)
        {
            tmp.push_back(s[j]);
        }

        if(tmp == com) c++;
        
    }


    cout<<c<<endl;
    


    return 0;
}
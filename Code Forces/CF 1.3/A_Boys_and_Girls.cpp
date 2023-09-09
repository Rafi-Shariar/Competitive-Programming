#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a,b;
    cin>>a>>b;
    int n=a+b;

    if(a>b){

        vector<char>v(a+b);
        for(int i=0; i<a+b; i++) v[i] = 'B';

        int idx=1;

        while (b-- && idx<n)
        {
            v[idx] = 'G';
            idx+=2;
        }

        for(auto i : v) cout<<i;
        cout<<endl;


    }
    else
    {
         vector<char>v(a+b);
        for(int i=0; i<a+b; i++) v[i] = 'G';

        int idx=1;

        while (a-- && idx<n)
        {
            v[idx] = 'B';
            idx+=2;
        }

        for(auto i : v) cout<<i;
        cout<<endl;
    }
    
    


    return 0;
}
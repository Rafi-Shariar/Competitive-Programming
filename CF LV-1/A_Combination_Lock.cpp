#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;

    string s1,s2;
    cin>>s1>>s2;

    int c=0;

    for(int i=0; i<n;  i++)
    {
       int a = s1[i] - '0';
       int b = s2[i] - '0';

      // cout<<min( abs(a-b), ( 10- max(b,a)) + min(a,b))<<endl;

       c += min( abs(a-b), ( 10- max(b,a)) + min(a,b));

       a/=10;
       b/=10;
    }

    cout<<c<<endl;
    
    


    return 0;
}
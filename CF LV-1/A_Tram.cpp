#include<bits/stdc++.h>
using namespace std;
int main(){
 
 
    int n; cin>>n;
 
    int sum = 0;
    int mx = 0;
 
    while (n--)
    {
        int a,b;
        cin>>a>>b;
 
        sum-=a;
        sum+=b;
 
        if(sum>mx) mx = sum;
    }
 
    cout<<mx<<endl;
    
 
 
    
 
 
    
 
 
    return 0;
}
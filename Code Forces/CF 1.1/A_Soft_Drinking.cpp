#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int a = (k*l)/nl;
    int b = c*d ;
    int x = p/np;
    
    int mn = min(a, min(b,x));
    
    cout<<mn/n<<endl;
    return 0;
}
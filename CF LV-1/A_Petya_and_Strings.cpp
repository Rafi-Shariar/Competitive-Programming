#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    string a,b;
    cin>>a>>b;

    int ans=0;

    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]>='A' && a[i]<='Z') a[i] = a[i] + 32;
        if(b[i]>='A' && b[i]<='Z') b[i] = b[i] + 32;
        
        if(a[i]==b[i]) continue;
        else
        {
            if(a[i]>b[i] ) ans=1;
            else if( a[i]<b[i]) ans = -1;
            break;
        }
        
    }

    cout<<ans<<endl;
    
    


    return 0;
}
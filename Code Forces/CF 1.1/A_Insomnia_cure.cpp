#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    int freq[d+1]={0};

    for(int i=k; i<=d; i+=k) freq[i]++;
    for(int i=l; i<=d; i+=l) freq[i]++;
    for(int i=m; i<=d; i+=m) freq[i]++;
    for(int i=n; i<=d; i+=n) freq[i]++;

    int c=0;

    for (int i = 1; i <= d; i++)
    {
       if( freq[i]==0) c++;
    }

    cout<<d-c<<endl;
    
    
    


    return 0;
}
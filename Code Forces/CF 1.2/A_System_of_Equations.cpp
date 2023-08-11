#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n,m;
    cin>>n>>m;

    int c=0;

    for (int i = 0; i <=max(n,m); i++)
    {
        for (int j = 0; j <= max(n,m); j++)
        {
            int v1 = (i*i) + j;
            int v2 = i + (j*j);

            if(v1 == n && v2==m) c++;
        }
        
    }

    cout<<c<<endl;
    
    


    return 0;
}
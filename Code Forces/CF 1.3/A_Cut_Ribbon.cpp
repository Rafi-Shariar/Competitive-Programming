#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n,a,b,c;
    cin>>n>>a>>b>>c;

    int mx = INT_MIN;

    for (int i = 0; i*a <= n; i++)
    {
        for (int j = 0; j*b + i*a <= n; j++)
        {
            int r = n - (i*a + b*j);

            if(r%c==0){
                int k = r/c;
                mx = max(mx, i+j+k);
            }

        }
        
    }

    cout<<mx<<endl;
    
    


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;

    if(n<3){
        cout<<0<<endl;
        return 0;
    }

    char arr[n+4][n+4];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) cin>>arr[i][j];

    int c=0;

    for (int i = 1; i <= n-2; i++)
    {
        for (int j = 1; j <= n-2; j++)
        {
            if(arr[i][j]=='X'){

                if(arr[i][j+2]=='X' && arr[i+1][j+1]=='X' && arr[i+2][j]=='X' && arr[i+2][j+2]=='X')
                   c++;
                

            }
        }
        
    }

    cout<<c<<endl;
    



    



    return 0;
}
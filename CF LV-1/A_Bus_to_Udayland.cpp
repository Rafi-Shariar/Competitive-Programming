#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    char arr[n+1][6];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=5; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    bool found = false;

     for (int i = 1; i <= n; i++)
    {
        char a = arr[i][1];
        char b = arr[i][2];
        char c = arr[i][4];
        char d = arr[i][5];

        if(a=='O' && b=='O'){
            found = true;
            arr[i][1] = '+';
            arr[i][2] = '+';
            break;
        }

        if(c=='O' && d=='O'){
            found = true;
            arr[i][4] = '+';
            arr[i][5] = '+';
            break;
        }
        
    }

    if(found){
        cout<<"YES"<<endl;

          for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <=5; j++)
          {
            cout<<arr[i][j];
          }

          cout<<endl;
        
        }

    }
    else cout<<"NO"<<endl;
    
    
    


    return 0;
}
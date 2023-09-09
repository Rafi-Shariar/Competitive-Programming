#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  char arr[4][4];

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
        cin>>arr[i][j];
    }
    
  }

  for (int i = 0; i < 3; i++)
  {
   
    for (int j = 0; j < 3; j++)
    {
         int c = 0, c2=0;
        if( arr[i][j] == '#') c++;
        if( arr[i][j+1] == '#') c++;
        if( arr[i+1][j] == '#') c++;
        if( arr[i+1][j+1] == '#') c++;

         if( arr[i][j] == '.') c2++;
        if( arr[i][j+1] == '.') c2++;
        if( arr[i+1][j] == '.') c2++;
        if( arr[i+1][j+1] == '.') c2++;

        if(c>=3 || c2>=3){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    
  }

  cout<<"NO"<<endl;

    


    return 0;
}
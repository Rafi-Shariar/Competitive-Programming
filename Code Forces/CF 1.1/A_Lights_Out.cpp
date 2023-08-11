#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int ans[3][3] = {1,1,1,1,1,1,1,1,1};
    int v[3][3];

    for(int i=0; i<3; i++)
       for(int j=0; j<3; j++) cin>>v[i][j];
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if( v[i][j] % 2==1){

                if(ans[i][j]==0) ans[i][j] = 1;
                else ans[i][j] = 0;

                 if(j+1<3){

                    if(ans[i][j+1] == 0) ans[i][j+1]=1;
                    else ans[i][j+1] = 0;

                 }

                   if(j-1>=0){

                    if(ans[i][j-1] == 0) ans[i][j-1]=1;
                    else ans[i][j-1] = 0;

                 }


                   if(i+1<3){

                    if(ans[i+1][j] == 0) ans[i+1][j]=1;
                    else ans[i+1][j] = 0;

                 }

                   if(i-1>=0){

                    if(ans[i-1][j] == 0) ans[i-1][j]=1;
                    else ans[i-1][j] = 0;

                 }

                
            }
           
            
        }
        
    }
    
    
    for(int i=0; i<3; i++){

        for (int j = 0; j < 3; j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
        
    }
    


    return 0;
}
/*

   ans[i][j] = 0;
                if(j+1<3){
                    
                    ans[i][j+1] = 0;



                if(j-1>=0) ans[i][j-1] = 0;
                if(i+1<3) ans[i+1][j] = 0;
                if(i-1>=0) ans[i-1][j] = 0;
                
                
                */
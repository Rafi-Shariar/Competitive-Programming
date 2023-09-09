#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;

    ll arr[n][n];
    int m,y;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];

            if(arr[i][j]==0) {
                m = i;
                y=j;
            }
        }
        
    }

    if(n==1 && arr[0][0]==0){
        cout<<1<<endl;
        return 0;
    }
    // else if(n==498){
    //   cout<<-1<<endl;
    //   //return 0;
    // }
    // else if (n==7 && m==3 && y==3)
    // {
    //      cout<<3250000000<<endl;
    //   //return 0;
    // }
    // else if(n==2){
    //     if(arr[0][0]==1 && arr[0][1]==2 && arr[1][0]==1 && arr[1][1]==0) cout<<-1<<endl;
    //    // return 0;
    // }
   
    
    
    
    set<ll>st;

    for (int i = 0; i < n; i++)
    {
        if(i==m) continue;

        ll sum = 0;

        for (int j = 0; j < n; j++)
        {
            sum+=arr[i][j];
        }

        st.insert(sum);  
    }

        set<ll>st2;

    for (int i = 0; i < n; i++)
    {
        if(i==y) continue;

        ll sum = 0;

        for (int j = 0; j < n; j++)
        {
            sum+=arr[j][i];
        }
    

        st2.insert(sum);  
    }

    if(st.size()>1 || st2.size()>1) cout<<-1<<endl;
    else
    {
        ll row=0, col = 0;

        for(int i=0; i<n; i++){
            row += arr[m][i];
            col += arr[i][y];
        }

        if(row==col){

            ll find = *st.begin() - row;
           if(find<=0) cout<<-1<<endl;
           else{

            arr[m][y] = find;

            ll d1=0,d2=0;

            for (int i = 0; i < n; i++)
            {
               for (int j = 0; j < n; j++)
               {
                  if(i==j) d1 += arr[i][j];
               }
               
            }

            int j=n-1;

              for (int i = 0; i < n; i++)
            {

                d2 += arr[i][j];
                j--;  
            }

           set<ll>xx,yy;

         for (int i = 0; i < n; i++)
        {

        ll sum = 0;

        for (int j = 0; j < n; j++)
        {
            sum+=arr[i][j];
        }

          xx.insert(sum);  
       }

        for (int i = 0; i < n; i++)
    {

        ll sum = 0;

        for (int j = 0; j < n; j++)
        {
            sum+=arr[j][i];
        }
    

        yy.insert(sum);  
    }

    if(xx.size()>1 || yy.size()>1) cout<<-1<<endl;
    else{

        if(*xx.begin() == *yy.begin() && *yy.begin()==d1 && d1==d2) cout<<find<<endl;
        else cout<<-1<<endl;
    }
   
  
           
           }
        }
        
    }
    
    
    
    
    
    


    return 0;
}
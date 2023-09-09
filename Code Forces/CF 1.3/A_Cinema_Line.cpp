#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n; cin>>n;
  int t25=0,t50=0,t100=0;

 for (int i = 0; i < n; i++)
 {
    int a; cin>>a;

    if(a==25) t25++;
    else
    {
        if(a==50){

            if(t25>0){
                t25--;
                t50++;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
            
        }

        if(a==100){

            if(t25>0 && t50>0) t25--, t50--;
            else if( t50==0 && t25>2) t25 -= 3;
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    
 }

 cout<<"YES"<<endl;
 
  


    return 0;
}
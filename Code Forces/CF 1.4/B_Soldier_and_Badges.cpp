#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;
   bool freq[1000000]={false};

   int c = 0;

   for (int i = 0; i < n; i++)
   {
     int a; cin>>a;

     if(!freq[a]) freq[a] = true;
     else
     {
        while (freq[a] != false)
        {
           
            a++;
            c++;
        }
        
        freq[a] = true;
     }
     
   }

//    cout<<endl;

//    for (int i = 0; i < 10; i++)
//    {
//      cout<<freq[i]<<" ";
//    }
   

   cout<<c<<endl;


   
   
   


    return 0;
}
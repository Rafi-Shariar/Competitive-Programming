#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;
   vector<int>v;
   set<int>st;
   int freq[1010]={0};
   int c=0;

   for (int i = 0; i < n; i++)
   {
     int a; cin>>a;

     if(st.find(a) != st.end()){
        v.push_back(a);
        freq[a]++;
        c++;
   
     }
    st.insert(a);

   }

   vector<int>ans;
    for(auto i : st) ans.push_back(i);

   while(c)
   {

    for (int i = 0; i <=1000 && c!=0; i++)
    {
        if(freq[i]>0){
            ans.push_back(i);
            c--;
            freq[i]--;
        }
    }
     
   }

   int b = 0;


   for (int i = 1; i < n; i++)
   {
     if(ans[i]>ans[i-1]) b++;
    
   }

   cout<< b <<endl;
   
   

 
  
   
    


    return 0;
}
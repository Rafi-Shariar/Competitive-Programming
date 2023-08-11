#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n; cin>>n;
  vector<int>v(n);

  for (int i = 0; i < n; i++)
  {
     cin>>v[i];  
  }

  int mx = *max_element(v.begin(),v.end());
  int mn = *min_element(v.begin(),v.end());

 int c=0;
 int idx1;

 for(int i=0;  i<n; i++){
    if(v[i]==mx){
        idx1 = i;
        break;
    }
 }


 while (idx1-1>=0)
 {
    swap(v[idx1-1],v[idx1]);
    c++;
    idx1--;

    if(v[0]==mx) break;
 }

 int idx2;

 for (int i = 0; i < n; i++)
 {
    if(v[i]==mn) idx2=i;
 }

 while (idx2+1<n)
 {
    swap(v[idx2+1],v[idx2]);
    c++;
    idx2++;

    if(v[n-1]==mn) break;
 }

 cout<<c<<endl;
 
 
 



  
    


    return 0;
}
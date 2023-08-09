#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int days,time;
   cin>>days>>time;

   int mt=0, mxt=0,sum=0;

   vector< pair<int,int>>v(days);
   vector<int>ans(days);

   for (int i = 0; i <days; i++)
   {
      cin>>v[i].first>>v[i].second;
      ans[i] = v[i].first;

      mt += v[i].first;
      mxt += v[i].second;
   
      sum += v[i].first;
      
   }

   

   //int sum = mt;

   if(time <= mxt && mt<=time){

    if(sum < time){

        for(int i = 0; i< days; i++){

            int dif = v[i].second - v[i].first;
            int curdif = 1;

            if(curdif>dif && sum>=time){

                ans[i] = v[i].first;
            }
            else{
            while (curdif<=dif && sum < time)
            {
                sum++;
                ans[i]++;
                curdif++;
            }
            }
        }
    }

    cout<<"YES"<<endl;
    for(auto i : ans) cout<<i<<" ";
    cout<<endl;

   }
   else cout<<"NO"<<endl;

   
    


    return 0;
}
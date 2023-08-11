#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
 
    vector<int>a;
 
    for (int i = 0; i < m; i++){
        int x; cin>>x;
        a.push_back(x);
    }
  
 
    sort(a.begin(), a.end());
 
    int mn=0, val = a[0]; 
    int k=0;
 
    for (int i = 0; i < n; i++)
    {
        mn += val;
        val -= 1;
        
        if (val == 0){
            val = a[k+1];
            k++;
        }
       
    }
 
    sort(a.begin(), a.end(), greater<int>());

    int mx=0;

    while (n--)
    {
        mx += a[0];
        a[0]--;

        for (int i = 1; i < m; i++)
        {
            if (a[i] <= a[i-1]){
                break;
            } 
            swap(a[i], a[i-1]);
        }
    }
 
    cout<<mx<<" "<<mn<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    
    queue<ll>q;
    bool freq[200022] = {false};
    bool visited[200022] = {false};

    for (int i = 0; i < n; i++)
    {
       ll a; cin>>a;
       q.push(a);

    }

    for (int i = 0; i < n; i++)
    {
        ll c=0;
        ll m; cin>>m;

        if(freq[m]==true){
            cout<<c<<" ";
            continue;
        }
        else
        {
            while (!q.empty())
            {
                int val = q.front();
                c++;
                freq[val] = true;
                visited[val] = true;
                q.pop();

                if(val==m) break;
            }

            cout<<c<<" ";
            
        }

        if(visited[m]) freq[m] = true;

        

    }
    
    




    return 0;
}
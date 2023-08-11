#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    
    int n; cin>>n;
    string s; cin>>s;

    int freq[26]={0};

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]-'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(freq[i]==0) continue;
        else
        {
            if(freq[i]%n != 0){
                cout<<-1<<endl;
                return 0;
            }
        }
        
    }

    string ans;

    for (int i = 0; i < 26; i++)
    {
        if(freq[i]>0){
            int val = freq[i]/n;

            while (val--)
            {
                 ans+= (i + 'a');
            }

        }
            
           
    }
    n--;
    string tmp = ans;

    while (n--)
    {
      ans += tmp;
    }

    cout<<ans<<endl;
    
    


    
    

    


    return 0;
}
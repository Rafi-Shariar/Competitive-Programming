#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void printMultiset(const multiset<char>& sett) {
    for (auto it = sett.begin(); it != sett.end(); ++it) {
        cout << *it;
        if (next(it) != sett.end()) {
            cout << " ";
        }
    }
    cout << endl;
}

int main(){

    int t; cin>>t;
    getchar();

   
    while (t--)
    {
        string a,b,c;
        cin>>a>>b>>c;

        ll i = 0, j=0;

        multiset<char>st;

        while (i<a.size() && j<b.size())
        {
            if(a[i]==b[j]) i++,j++;
            else
            {
                st.insert(b[j]);
                j++;
            }
            
        }

        if(i<a.size()){
            cout<<"NO"<<endl;
            continue;
        }

        while (j<b.size())
        {
            st.insert(b[j]);
            j++;
        }

        for (int i = 0; i < c.size(); i++)
        {
            if( st.count(c[i])) st.erase(st.find(c[i]));
        }

        if(st.size()) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
        
        
    }
    


    return 0;
}
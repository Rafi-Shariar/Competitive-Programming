#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;



//https://vjudge.net/contest/600885#problem/X
int main()
{

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;

        set<pair<int,string>>st;

        while (n--)
        {
            string s; cin >> s;
            int x; cin >> x;
            st.insert({x,s});
        }

        for (auto i = st.rbegin(); i != st.rend(); i++)
        {
            cout << i->second << endl;
        }
        


        
    }
    

    return 0;
}
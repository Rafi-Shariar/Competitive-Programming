#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


//https://vjudge.net/contest/576547#problem/T
int main()
{
   

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        priority_queue< pair<int , string > >pq;

        while (n--)
        {
            string s; cin >> s;
            int yr; cin >> yr;

            pq.push({yr, s});

        }

        while (!pq.empty())
        {
            pair<int,string>now = pq.top();
            cout << now.second << endl;
            pq.pop();
        }
        
        
    }
    

    return 0;
}
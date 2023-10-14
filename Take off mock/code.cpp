#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define forin(x,n)  for(int i=0; i<n; i++) cin>>x[i];
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif



int main()
{
    int n; cin>>n;
    deque<char>dq;

    for (int i = 0; i < n; i++)
    {
        char x; cin>>x;
        dq.push_back(x);
    }

    int queries; cin>>queries;
    int operations = 0;

    while (queries--)
    {
        char c; cin>>c;
        vector<char>v;

        while (dq.front() != c) // till i see the book
        {
            v.push_back(dq.front());
            dq.pop_front();
            operations++;
        }

        //taking the book out
        char now = dq.front();
        dq.pop_front();

        for(int i = v.size()-1; i>=0; i--) dq.push_front( v[i] );
        dq.push_back(now); // adding removed book

    }

    cout<<operations<<endl;
    for(auto i : dq) cout<<i<<" ";
    cout<<endl;
    

    
    

    return 0;
}
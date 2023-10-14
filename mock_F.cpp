#include <bits/stdc++.h>
using namespace std;

void ps(stack<char>st){

    while (st.size())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return;
    
}
int main()
{
    

        int n; cin>>n;
        stack<char>st;
        vector<char>v(n);

        for (int i = 0; i < n; i++) cin>>v[i];

        for (int i = n-1; i >= 0; i--) st.push( v[i] );
     
        ps(st);
        

        int queries; 
        cin>>queries;

        while (queries--)
        {
            char c; cin>>c;
            vector<char>v;

            while (st.top() != c)
            {
                v.push_back( st.top());
                st.pop();
            }

            char the_book  = st.top();
            st.pop();

            for(int i=v.size()-1; i>=0; i--) st.push( v[i] );
            st.push(the_book);

           // ps(st);
            
        }
        
        ps(st);
    

    return 0;
}
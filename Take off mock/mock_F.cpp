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
        int n; 
        cin>>n;

        stack<char>st;
        vector<char>v(n);

        for (int i = 0; i < n; i++) cin>>v[i]; // taking input in an array

        for (int i = n-1; i >= 0; i--) st.push( v[i] ); // inserting in the stack

        int queries; 
        cin>>queries;

        while (queries--)
        {
            char c; cin>>c;
            vector<char>temp;

            while (st.top() != c) // iterating till we find the book
            {
                temp.push_back( st.top()); // inserting popped characters in a temporary array 
                st.pop();
            }

            char the_book  = st.top(); // storing the book in a variable
            st.pop(); // removing the book from the stack

            for( int i = temp.size()-1; i >= 0; i-- ) st.push( temp[i] ); // returning popped books in the stacks
            st.push(the_book); // placing the returened book at the top

        }
        
        ps(st); // printing the stack
    

    return 0;
}
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

//https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
bool check_subsequence(string a, string b){

    // check is b is a subsequence of a

    int i = 0;

    for(auto ch : b){

        while (a[i] != ch && i<a.size() )
        {
            i++;
        }

        if( i >= a.size()) return false;

        i++;
        
    }

    return true;
}
bool remove(string a, string b, int mid, vector<int>&v){

    vector<bool>alive(a.size(), true);

    for (int i = 0; i < mid; i++)
    {
        alive[ v[i] ] = false;
    }

    string new_a = "";

    for (int i = 0; i < a.size(); i++)
    {
        if( alive[i]) new_a += a[i];
    }

    //cout << new_a << endl;    

    return check_subsequence(new_a, b);
    

}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        string a,b;
        cin >> a >> b;
        vector<int>v(a.size());

        for (int i = 0; i < a.size(); i++)
        {
            cin >> v[i];
            v[i]--;
        }

        int low = 0, high = a.size() , ans = 0;

        while (low <= high)
        {
            int mid = low + (high - low)/2;

            if( remove(a,b,mid,v)){

              
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }

        cout << ans << endl;
        




        
        
    }
    

    return 0;
}
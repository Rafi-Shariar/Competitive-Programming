#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
//https://vjudge.net/contest/603667#problem/M
int main()
{

    int t=1;
    cin>>t;

    while (t--)
    {
        int a,b; cin >> a >> b ;

        if(b==0){
            cout << 1 << endl;
            continue;
        }

        int cur = 1;
        vector<int>v;

        for (int i = 1; i <= 4; i++)
        {
            cur = cur*a;
            v.push_back(cur%10);
        }


        int idx = b%4;

        if( idx == 0) idx = 4;
        cout << v[ idx-1 ] << endl;
        
    }
    

    return 0;
}
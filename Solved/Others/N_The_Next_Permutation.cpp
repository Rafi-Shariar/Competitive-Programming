
//https://vjudge.net/contest/574988#problem/N
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
  

    int t=1;
    cin>>t;

    while (t--)
    {
        int tt; cin >> tt;
        string s; cin >> s;

        string tmp = s;

        next_permutation(tmp.begin(), tmp.end());

        bool pos = false;

        // for (int i = 0; i< s.size(); i++)
        // {
        //     if( tmp[i] > s[i]) pos = true;
        // }

        if( tmp > s ) cout << tt << " " << tmp << endl;
        else cout << tt << " " << "BIGGEST" << endl;
        

    }
    

    return 0;
}
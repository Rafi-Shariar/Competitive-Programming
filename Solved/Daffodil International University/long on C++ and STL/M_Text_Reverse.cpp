#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


//https://vjudge.net/contest/600885#problem/M
int main()
{
   

    int t=1;
    cin>>t;
    cin.ignore();

    while (t--)
    {
        string s; getline(cin , s);

        string tmp;

        for (int i = 0; i < s.size(); i++)
        {
           
            if( s[i] == ' ' || i == s.size() - 1){

                if( i == s.size() -1 ) tmp += s[i];


                reverse(tmp.begin(), tmp.end());
                cout << tmp;
                if( s[i] == ' ') cout << " "; 
                tmp = "";

            }

             else  tmp += s[i];

           
        }

        cout << endl;
        

        
    }
    

    return 0;
}
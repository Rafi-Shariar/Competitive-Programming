#include <iostream>
#include <algorithm>
#include <string>

using namespace std;



int main()
{
     string s; 


    while (getline(cin , s))
    {
      

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
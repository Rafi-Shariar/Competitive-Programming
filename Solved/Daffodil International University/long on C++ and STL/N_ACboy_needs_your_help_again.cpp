#include <iostream>
#include <algorithm>
#include <string>
#include<deque>

using namespace std;

//https://vjudge.net/contest/600885#problem/N
int main()
{
   

    int t=1;
    cin>>t;

    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin.ignore();
        cin >> s;

        deque<int>dq;

        if( s == "FIFO"){

        	while(n--){
        		string a;
        	int b;

        	cin >> a;

        	if( a == "IN"){
        		cin >> b;
        		dq.push_back(b);
        	}
        	else{

        		if( dq.empty()) cout << "None" << endl;
        		else{
        			cout << dq.front() << endl;
        			dq.pop_front();
        		}
        	}
        	}
       }
       else{

       	while(n--){

       		  string a;
       	   int b;

       	   cin >> a;

       	   if( a == "IN"){
       	   	cin >> b;
       	   	dq.push_back(b);
       	   }
       	   else{

       	   	  if( dq.empty()) cout << "None" << endl;
       	   	  else{

       	   	  	cout << dq.back() << endl;
       	   	  	dq.pop_back();
       	   	  }
       	   }
       	}

       	 
       }




    }
    

    return 0;
}
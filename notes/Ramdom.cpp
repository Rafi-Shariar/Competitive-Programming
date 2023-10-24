#include<bits/stdc++.h>
using namespace std;
#define ll  ong long int

// custom comperator
bool comp( pair<int,int>x, pair<int,int>y){
    if(x.first == y.first) return x.second > y.second;
    return x.first < y.first;
}

// String to Integer converter
ll stringToInt(string& s)
{
    ll ans = 0;
    for (int i = 0; i < s.size(); i++)
        ans = ans * 10 + (s[i] - '0');
    return ans;
} 

// Binary to decimal converter
int binaryToDecimal(int n) 
{ 
    int num = n; 
    int dec_value = 0; 
  
    int base = 1; 
  
    int temp = num; 
    while (temp) { 
        int last_digit = temp % 10; 
        temp = temp / 10; 
  
        dec_value += last_digit * base; 
  
        base = base * 2; 
    } 
  
    return dec_value; 
}

// store number of divisor of n
void  find_divisor(ll n, vector<ll>&v) 
{ 
    for (ll i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        {  
            if (n/i == i) v.push_back(i);
            else{ 
                v.push_back(i);
                v.push_back(n/i);

            }
        } 
    } 
} 






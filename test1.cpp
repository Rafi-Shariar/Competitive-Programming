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


//https://shorturl.at/mtvP6
int check(vector<int>& v, int mid , int student){

    int c = 1; 
    int sum = 0;

    for(int i=0; i< v.size(); i++){

        if( sum + v[i] > mid ){
            c++;
            sum = v[i];
        }
        else sum += v[i];

    }

    return c;
}

int findPages(vector<int>& v, int books, int student) {
    // Write your code here.

    int mx = -1, sum = 0;

    for(int i=0; i<v.size(); i++){
        sum += v[i];
        mx = max(v[i], mx);
    }

    int low = mx, high = sum;

    while(low <= high){

        int mid = low + (high - low)/2;

        int tmp = check( v , mid , student);

       // cout << "tmp = " << tmp << " " << mid << endl;;

        if( tmp <= student ) high = mid - 1;
        else low = mid + 1;
    }

    return low;




}


/* answer lies between max_element & sum of the array. bcz
  - a student must have one book
  - if there is only 1 stdnt he will have all the books

*/
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {

        vector<int> v = { 4 ,78, 9};
        
        cout << findPages(v,5, 2 ) << endl;
        
    }
    

    return 0;
}
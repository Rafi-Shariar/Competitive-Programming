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


double grede( double avg){

    if( avg >= 0 && )
}
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;

        double total = 0.0, cre = 0.0;

        while (n--)
        {
            double marks, credit;
            cin >> marks >> credit;

            total += ( marks * credit);

            cre += credit;

        }

        double avg = total / cre;

        cout << grade(avg) << endl;


        
    }
    

    return 0;
}
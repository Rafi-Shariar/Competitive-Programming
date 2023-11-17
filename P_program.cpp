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


const int X = 1000;
int col,row,q;
char arr[X][X];
char temp[X][X];

void  Khida_lagse(int i, int j,ll &ans){

    if (i < 0 || i >= row || j < 0 || j >= col || arr[i][j] == '#') return;

    cout << arr[i][j] << endl;

    if( arr[i][j] == 'C') ans++;
    arr[i][j] = '#';

    Khida_lagse(i+1,j,ans);
    Khida_lagse(i-1,j,ans);
    Khida_lagse(i,j+1,ans);
    Khida_lagse(i,j-1,ans);

}
int main()
{
    fast
    
    int t=1;
    cin>>t;

    while (t--)
    {
       
        cin >> row >>  col>> q;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> arr[i][j];
            }
            
        }

        while (q--)
        {
            int x,y;
            cin >> x >> y;

            ll ans = 0;


            Khida_lagse(x,y,ans);

            cout << ans << endl;

        }
        
        

        
    }
    

    return 0;
}
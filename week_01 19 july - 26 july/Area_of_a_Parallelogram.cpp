#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://lightoj.com/problem/area-of-a-parallelogram
int main(){

    int t; cin>>t;

    for (int i = 1; i <= t; i++)
    {
        int ax,ay,bx,by,cx,cy;
        cin>>ax>>ay>>bx>>by>>cx>>cy;

        int dx = ax + cx - bx;
        int dy = ay + cy - by;

        int x = (ax*by) + (bx*cy) + (cx*dy) + (dx*ay);
        int y = (bx*ay) + (cx*by) + (dx*cy) + (ax*dy);

        int area = 0.5 * (x-y);
        if( area<0) area*=-1;

        printf("Case %d: ",i);

        cout<<dx<<" "<<dy<<" "<<area<<endl;
    }
    
    


    return 0;
}
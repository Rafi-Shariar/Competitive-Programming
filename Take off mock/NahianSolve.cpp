#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n;
    cin >> n;
    deque<char>dq;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        dq.push_back(c);
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        char c;
        cin >> c;
        deque<char>::iterator chk;
        for(auto it = dq.begin(); it != dq.end(); it++){
            if(*(it) == c){
                chk = it;
                break;
            }
        }
        char tmp = *(chk);
        dq.erase(chk);
        dq.push_front(tmp);
    }
    for(auto x: dq){
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}
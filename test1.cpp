#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif


void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

bool isvalid(vector<vector<char>>&board, int row, int col, char c){

    for(int i=0; i< board.size(); i++){
        
        if( board[i][col] == c) return false;
        if( board[row][i] == c) return false;

        if(board[ 3*(row/3) + i/3][3*(col/3) + i%3] == c) return false;
    }

    return true;
}

bool solve(vector<vector<char>>&board){

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if(board[i][j]=='.'){

                for (char c = '1'; c <= '9'; c++)
                {
                    if(isvalid( board, i,j,c)){
                        board[i][j] = c;

                        if(solve(board)) return true;
                        else board[i][j] = '.';
                    }
                }
                
                return false;
            }
        }
        
    }

    return true;
    
}
int main()
{
    fast();

    int t=1;
    //cin>>t;

    while(t--)
    {

    }

    return 0;
}
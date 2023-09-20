#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

bool isvalid(vector<vector<char>>& board, int row, int col, char c) {
    for (int i = 0; i < 4; i++) {
        if (board[row][i] == c) return false;
        if (board[i][col] == c) return false;
    }
    return true;
}

bool solve(vector<vector<char>>& board, int n) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[i][j] == '.') {
                for (char c = '1'; c <= '4'; c++) {
                    if (isvalid(board, i, j, c)) {
                        board[i][j] = c;
                        if (solve(board, n)) return true;
                        board[i][j] = '.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void fun(vector<vector<char>>& board, int n) {
    solve(board, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
}

int main() {
    // fast();
    int t = 1;
    // cin>>t;

    while (t--) {
        int n = 4;

        vector<vector<char>> board(n, vector<char>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> board[i][j];
            }
        }

        fun(board, n);
    }

    return 0;
}

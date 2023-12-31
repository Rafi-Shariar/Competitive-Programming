#include <bits/stdc++.h>
using namespace std;

#define ll         long long int
#define forin(x, n) for (int i = 0; i < n; i++) cin >> x[i];
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif

int main()
{
    fast

    int n;
    cin >> n;
    set<pair<string, int>> st;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int a;
        cin >> a;

        st.insert({s, a});
    }

    debug(st);

    int q;
    cin >> q;

    while (q--)
    {
        string s;
        cin >> s;

        string ans = "";
        int mx = 0;
        int cur = INT_MIN;

        bool found = false;

        for (auto i : st)
        {
            int c = 0;

            if (i.first.size() == s.size() && i.first[0] == s[0])
            {
                string tmp = i.first;
                int cur2 = i.second;
                for (int j = 0; j < s.size(); j++)
                {
                    if (s[j] == tmp[j])
                        c++;
                }

                if (c > mx && cur2 > cur)
                {
                    mx = c;
                    ans = tmp;
                    cur = cur2;
                    found = true;
                }
            }
        }

        if (found)
            cout << ans << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

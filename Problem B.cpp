#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
 
    for (int i = 1; i <= t; ++i) {
        int n, answer = 0, cur = 0, remainder = 0;
        cin >> n;
 
        while(n--) {
            cin >> cur;
            int mn = min(cur, remainder);
            cur -= mn;
            answer += (cur/2) +  mn;
            remainder = cur % 2;
        }
        cout << answer << endl;
    }
    return 0;
}

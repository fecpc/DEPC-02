#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int t;
    cin >> t;
 
    for (int i = 1; i <= t; ++i) {
        int n, cnt = 0; 
        cin >> n;
        int ara[n+1];
 
        for (int i = 1; i <= n; ++i)    
            cin >> ara[i];
 
        for (int i = 1; i <= n; ++i) {
            if (ara[i] != i) {
                for (int j = i + 1; j <= n; ++j) {
                    if (ara[j] == i) {
                        swap (ara[i] , ara[j]);
                        cnt++;
                    }
                }
            }
        }
        printf ("Case %d: %d\n" , i , cnt);
    }
    return 0;
}

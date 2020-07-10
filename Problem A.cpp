#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t, a, b;
    cin >> t;
 
    while(t--) {
        cin >> a >> b;
        if(a > 999999 || b > 999999)    cout << "No" << endl;
        else                            cout << "Yes" << endl;
    }
    return 0;
}

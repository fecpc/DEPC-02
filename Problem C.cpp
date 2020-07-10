#include <bits/stdc++.h>
using namespace std;
 
bool check(int n) {
    if(n == 2)      return 1; // 1 is not in the input so don't worry about 1
    if(n % 2 == 0)  return 0;
    int limit = sqrt(n)+1;
 
    for (int i = 3; i <= limit; i += 2) 
        if(n % i == 0) 
            return 0;
    return 1;
}
 
int main() 
{
    int t, n;
    cin >> t;
 
    for (int i = 1; i <= t; ++i) {
        cin >> n;
        if(check(n))    cout << "Yes" << endl;
        else            cout << "No" << endl;
    }   
    return 0;
}

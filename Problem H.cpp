#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
 
    int t;
    cin >> t;
    while(t--) {
        long long a, b, g, l;
        cin >> a >> b;
        g = __gcd (a, b);
        l = (a/g) * b; // (a*b)/g can be overflowed
        if(g+l==a+b)    puts("true");
        else            puts("false");
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n, start, end, answer = 0, ara[1000007] = {};
    cin >> n;
 
    while (n--) {
        cin >> start >> end;
        ara[start]++;
        ara[end+1]--;
    }
    for (int i = 1; i <= 1000000; ++i) {    
        ara[i] += ara[i-1];
        answer = max(answer, ara[i]);
    }
    cout << answer << endl;
 
    return 0;
}

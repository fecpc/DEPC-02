#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    string s;
    map<string, int> mp;
 
    while(t--) {
        cin >> s;
        mp[s]++;
        if(mp[s] == 1)  cout << "OK" << endl;
        else            cout << s << mp[s]-1 << endl;
    }   
    return 0;
}

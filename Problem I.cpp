#include <bits/stdc++.h>
using namespace std;
 
const int M = 100000007;
long long powers[11], q, user_pass, pass;
string type, name;
map<int, bool> my_map;
 
void add(string s) {
    int len = s.size();
 
    for (int i = 0, exp = len-1; i < len; ++i, --exp)
        pass = (pass + ((int)s[i] * powers[exp])) % M;
 
    my_map[pass] = true;
    pass = 0;
}
 
 
int main() 
{
    powers[0] = 1;
    for (int i = 1; i <= 10; ++i) {
        powers[i] = (powers[i-1] * 131) % M;
    }
    cin >> q;
 
    while(q--) {
        cin >> type;
        if(type == "Register") {
            cin >> name;
            add(name);
 
            for (char ch = '0'; ch <= '9'; ++ch)
                add(name + ch);
        }   
        else {
            cin >> user_pass;
            if(my_map.count(user_pass)) cout << 1 << endl;
            else                        cout << 0 << endl;
        }                   
    }
    return 0;
}

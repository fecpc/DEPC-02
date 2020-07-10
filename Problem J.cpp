#include <bits/stdc++.h>
using namespace std;
 
vector<int> adj[10001], parent(10001);
map<string, int> mp;
map<int, string> path;
int node, edge, cnt = 1;
string source, destination;
 
void bfs() 
{
    int src = mp[source], dest = mp[destination];
    queue<int> q;
    vector<bool> visited(node);
    visited[src] = 1;
    q.push(src);
 
    for (int i = 0; i < 10001; ++i) 
        parent[i] = -1;
 
    while(!q.empty()) {
        int top = q.front();
        q.pop();
 
        for (int i : adj[top]) {
            if(!visited[i]) {
                visited[i] = 1;
                q.push(i);
                parent[i] = top;
            }
        }
    }
 
    if(visited[dest] == true) {
        stack <string> stk;
 
        while(parent[dest] != -1) {
            stk.push(path[dest]);
            dest = parent[dest];
        }
        stk.push(source);
 
        while(!stk.empty()) {
            string now = stk.top();
            stk.pop();
            if(stk.empty()) cout << now << endl;
            else            cout << now << " ";
        }
    }
    else puts("-1");
}
 
int main() 
{
    cin >> node >> edge;
 
    while(edge--) {
        cin >> source >> destination;
        if(!(mp.count(source)))         mp[source] = cnt++;
        if(!(mp.count(destination)))    mp[destination] = cnt++;
 
        adj[mp[source]].push_back(mp[destination]);
        adj[mp[destination]].push_back(mp[source]);
 
        path[mp[source]] = source;
        path[mp[destination]] = destination; 
    }
    cin >> source >> destination;
    if(mp.count(source) && mp.count(destination)) {
        bfs();
    }
    else cout << -1 << endl;
 
    return 0;
}

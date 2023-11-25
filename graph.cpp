#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adj;
    unordered_map<int, bool> visited;

    void addEdge(int u, int v, bool direction)
    {
        adj[u].push_back(v);
        if (direction == true)
            adj[v].push_back(u);
    }

    void BFS(int val)
    {
        queue<int> q;
        q.push(val);
        visited[val] = true;
        while (!q.empty())
        {
            int top = q.front();
            q.pop();
            cout << top << " ";
            for (auto x : adj[top])
            {
                if (!visited[x])
                {
                    q.push(x);
                    visited[x] = true;
                }
            }
        }
        cout << endl;
    }

    void DFS(int val)
    {
        visited[val] = true;
        cout << val << " ";
        for (auto x : adj[val])
        {
            if (!visited[x])
            {
                DFS(x);
            }
        }
    }

    void print()
    {
        for (auto &x : adj)
        {
            cout << x.first << "->";
            for (auto &y : x.second)
            {
                cout << y << ", ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g;
    int n = 0, m = 0;
    cout << "Enter the number of nodes in graph:" << endl;
    cin >> n;
    cout << "Enter the number of Edges in graph:" << endl;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int u = 0, v = 0;
        cin >> u >> v;
        g.addEdge(u, v, true);
    }
    cout << "------------------------------" << endl;
    
    g.print();
    // cout<<"------------------------------"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     if (!g.visited[i])
    //     {
    //         g.BFS(i);
    //     }
    // }
    cout << "------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        if (!g.visited[i])
        {
            g.DFS(i);
        }
    }
    return 0;
}

// test case
//  5
//  6
//  0 1
//  1 2
//  2 3
//  3 1
//  3 4
//  0 4
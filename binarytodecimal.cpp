#include<bits/stdc++.h>
using namespace std;

void simplifyPath(string path)
{
    stack<int> s;
    for (int i = 0; i < path.length(); i++)
    {
        s.push(path[i]);
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    string simplifyPath("hello");
        return 0;
}
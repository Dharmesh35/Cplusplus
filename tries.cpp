#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *childrens[26];
    bool end;
    TrieNode(char val) : data(val)
    {
        for (auto &x : childrens)
        {
            x = nullptr;
        }
        end = false;
    }
};

class Trie
{
public:
    TrieNode *root = new TrieNode('\0');

    void insertAtRoot(TrieNode *&root, string word)
    {
        if (word.size() == 0)
        {
            root->end = true;
            return;
        }

        TrieNode *child;
        int idx = word[0] - 'a';

        if (root->childrens[idx])
        {
            child = root->childrens[idx];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->childrens[idx] = child;
        }
        insertAtRoot(child, word.substr(1));
    }

    void Insert(string val)
    {
        insertAtRoot(root, val);
    }

    bool searchAtRoot(TrieNode *&root, string word, int i)
    {
        if (i == word.size())
        {
            return root->end;
        }
        TrieNode *child;
        int idx = word[i++] - 'a';

        if (root->childrens[idx])
        {
            child = root->childrens[idx];
        }
        else
        {
            return false;
        }
        return searchAtRoot(child, word, i);
    }

    bool Search(string val)
    {
        return searchAtRoot(root, val, 0);
    }

};

int main()
{
    Trie t;
    t.Insert("vscode");
    cout << t.Search("vscode");
}
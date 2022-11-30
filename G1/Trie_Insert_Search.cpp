#include <iostream>
using namespace std;
struct Node
{
    Node *child[26] = {NULL};
    bool isWord = false;
};
Node *root = new Node();

void insert(Node *head, string str)
{
    Node *temp = head;
    for(int i = 0 ; i < str.length; i++)
    {
        if(!temp -> child[str[i] - 'a'])
            temp -> child[str[i] - 'a'] = new Node();
        temp = temp -> child[str[i] - 'a'];
    }
    temp -> isWord = true;
}
    bool search(Node *head, string str)
    {
        Node *temp = head;
        for(int i = 0 ; i < str.length(); i++)
        {
            if(!temp -> child[str[i] - 'a'])
                return false;
            temp = temp -> child[str[i] - 'a'];
        }
        return temp -> isWord;
    }
bool startsWith(string prefix)
{
    Node *temp = root;
    for(char c : prefix)
    {
        if(!temp -> child[c - 'a'])
            return false;
        temp = temp -> child[c - 'a'];
    }
    return true;
}

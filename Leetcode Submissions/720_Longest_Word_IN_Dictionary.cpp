class Solution {
public:
    struct Node {
        Node *arr[26];
        bool end = false;
    };
    Node *root = new Node();
    
    void insert(string &word)
    {
        Node *curr = root;
        for(int i = 0 ; i < word.size(); i++)
        {
            if(curr -> arr[word[i] - 'a'] == NULL){
                curr -> arr[word[i] - 'a'] = new Node();
            }
            curr = curr -> arr[word[i] - 'a'];
        }
        curr -> end = true;
    }
    
    bool isValid(string &word, Node *curr)
    {
        for(int i = 0 ; i < word.size(); i++)
        {
            curr = curr -> arr[word[i] - 'a'];
            if(curr -> end == false)
                return false;
        }
        return true;
    }
    
    string longestWord(vector<string>& words) {
        
        string ans = "";
        for(int i = 0 ;i < words.size(); i++)
        {
            insert(words[i]);
        }
        
        for(int i = words.size() - 1; i >= 0; i--)
        {
            if(isValid(words[i], root))
            {
                if(words[i].size() > ans.size())
                {
                    ans = words[i];
                }
                else if(words[i].length() == ans.length())
                    ans = min(words[i], ans);
            }
        }
        return ans;
    }
};
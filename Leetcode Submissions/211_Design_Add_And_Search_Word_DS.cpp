class WordDictionary {
    struct TrieNode{
        char val;
        int count;
        int endsHere;
        TrieNode *child[26];
    };
    TrieNode *root;
    TrieNode *getNode(int index)
    {
        TrieNode *node = new TrieNode();
        node-> val = 'a' + index;
        node -> count = node -> endsHere = 0;
        for(int i = 0 ; i < 26; i++)
        {
            node -> child[i] = NULL;
        }
        return node;
    }
public:
    WordDictionary() {
        root = getNode('/' - 'a');
    }
    
    void addWord(string word) 
    {
        TrieNode *curr = root;
        for(int i = 0 ; i < word.length(); i++)
        {
            int index = word[i] - 'a';
            if(curr -> child[index] == NULL)
                curr -> child[index] = getNode(index);
            curr = curr -> child[index];
            curr -> count += 1;
        }
        curr -> endsHere += 1;
    }
    
    bool search(string word) {
        TrieNode *curr = root;
        return check(word, root, 0);
    }
    bool check(string &word, TrieNode *curr, int index)
    {
        if(index == word.size())
            return (curr -> endsHere > 0);
        if(word[index] == '.')
        {
            bool ans = false;
            for(int i = 0 ; i < 26; i++)
            {
                if(curr -> child[i] != NULL)
                {
                    ans = ans or check(word, curr -> child[i], index + 1);
                }
            }
            return ans;
        }
        else
        {
            int ind = word[index] - 'a';
            if(curr -> child[ind] != NULL)
            {
                return check(word, curr -> child[ind], index + 1);
            }
            return false;
        }
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
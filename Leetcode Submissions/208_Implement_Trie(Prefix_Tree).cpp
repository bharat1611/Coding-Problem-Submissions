class Trie {
public:
    struct TrieNode
    {
        char val;
        int count;
        int endsHere;
        TrieNode *child[26];
    };
    TrieNode *root;
    TrieNode *getNode(int index)
    {
        TrieNode *newNode = new TrieNode();
        newNode -> val = 'a' + index;
        newNode -> count = newNode -> endsHere = 0;
        
        for(int i = 0 ; i < 26; i++)
            newNode->child[i] = NULL;
        
        return newNode;
        
    }
    Trie() {
        root = getNode('/' - 'a');
    }
    
    void insert(string word) 
    {
        TrieNode *curr = root;
        for(int i = 0 ; i < word.size(); i++)
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
        for(int i = 0 ; i < word.size(); i++)
        {
            int index = word[i] - 'a';
            if(curr -> child[index] == NULL)
                return false;
            curr = curr -> child[index];
        }
        if(curr -> endsHere != 0)
            return true;
        return false;
    }
    
    bool startsWith(string word) 
    {
        TrieNode *curr = root;
        for(int i = 0 ; i < word.size(); i++)
        {
            int index = word[i] - 'a';
            if(curr -> child[index] == NULL)
                return false;
            curr = curr -> child[index];
        }
        if(curr -> count != 0)
            return true;
        return false;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
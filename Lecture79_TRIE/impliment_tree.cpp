class TrieNode{
public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            data=ch;
            for (int i = 0; i < 26; i++)
            {
                children[i]=NULL;
            }
            isTerminal=false; 
        }
};



class Trie {

public:
            TrieNode* root;
    /** Initialize your data structure here. */
    Trie() {
            root= new TrieNode('\0');
    }

    void insertUtil(TrieNode* root,string word){
            //base case
            if (word.length()==0)
            {
                root->isTerminal=true;
                return;
            }
            //assumption char is in caps
            int index=word[0]-'a';
            TrieNode* child;

            //present
            if(root->children[index]!=NULL){
                child=root->children[index];
            }
            else{
                //absent
                child=new TrieNode(word[0]);
                root->children[index]=child;
            }

            //RECURSSION
            insertUtil(child,word.substr(1));
        }

    /** Inserts a word into the trie. */
    void insert(string word) {
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode* root,string word){
            //base case
            if(word.length()==0){
                return root->isTerminal;
            }

            int index=word[0]-'a';
            TrieNode* child;

            if (root->children[index]!=NULL)
            {
                child=root->children[index];
            }
            else{
                return false;
            }
            //recurssion
            return searchUtil(child,word.substr(1));
        }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        return searchUtil(root,word);
    }

    bool prefixUtil(TrieNode* root,string word){
            //base case
            if(word.length()==0){
                return true;
            }

            int index=word[0]-'a';
            TrieNode* child;

            if (root->children[index]!=NULL)
            {
                child=root->children[index];
            }
            else{
                return false;
            }
            //recurssion
            return prefixUtil(child,word.substr(1));
        }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        return prefixUtil(root,prefix);
    }
};
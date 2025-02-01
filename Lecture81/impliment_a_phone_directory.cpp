class TrieNode{
public:
    int data;
    TrieNode* children[26];
    int childCount;
    bool isTerminal;

    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        childCount=0;
        isTerminal=false;
    }
};
class Trie{
public:
        TrieNode* root;
        Trie(char ch){
            root=new TrieNode(ch);
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
                root->childCount++;
                root->children[index]=child;
            }

            //RECURSSION
            insertUtil(child,word.substr(1));
        }

    /** Inserts a word into the trie. */
        void insert(string word) { insertUtil(root, word); }

        void printSuggestions(TrieNode* curr,vector<string>&temp,string prefix){
            if(curr->isTerminal){
                temp.push_back(prefix);
            }
            for(char ch='a';ch<='z';ch++){
                TrieNode* next=curr->children[ch-'a'];

                if(next!=NULL){
                    prefix.push_back(ch);
                    printSuggestions(next,temp,prefix);
                    prefix.pop_back();
                }
            }
        }

        vector<vector<string>> getSuggestion(string str){
            TrieNode* prev=root;
            vector<vector<string>>output;
            string prefix="";

            for(int i=0;i<str.length();i++){
                char lastch=str[i];
                prefix.push_back(lastch);
                //check for last ch
                TrieNode* curr=prev->children[lastch-'a'];
                //if not found

                if(curr==NULL){
                    break;
                }

                //if found
                vector<string>temp;
                printSuggestions(curr, temp, prefix);
                output.push_back(temp);
                temp.clear();
                prev=curr;
            }
            return output;
        }
};

vector<vector<string>>phoneDirectory(vector<string> &contactList, string &queryStr) {
        //    Write your code here.
    Trie *t=new Trie('\0');
    for(int i=0;i<contactList.size();i++){
        string str=contactList[i];
        t->insert(str);
    }

    return t->getSuggestion(queryStr);
}
//time complexity=o(n*m^2);
// space comp=o(m*n)
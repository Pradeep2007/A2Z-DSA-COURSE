string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    string ans="";
    for(int i=0;i<arr[0].size();i++){
        char ch=arr[0][i];
        bool match=true;

        for(int j=1;j<n;j++){
            if(arr[j].size()<i || ch!=arr[j][i]){
                match=false;
                break;
            }
            
        }
        if(match==false){
            break;
        }
        else{
            ans.push_back(ch);
        }
    }
    return ans;
}
//ITS TIME COM IS O(M*N)
//SPACE IS O(1)

//NOW BY USING TRIE

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
        void insert(string word) {
            insertUtil(root,word);
        }

        void lcp(string str,string &ans){
            for(int i=0;i<str.length();i++){
                char ch=str[i];
                if(root->childCount==1){
                    ans.push_back(ch);
                    int index=ch-'a';
                    root=root->children[index];
                }
                else {
                    break;
                }
                if(root->isTerminal){
                    break;
                }
            }
        }
};
string longestCommonPrefix(vector<string> &arr, int n)
{
    Trie* t=new Trie('\0');
    for(int i=0;i<n;i++){
        t->insert(arr[i]);
    }
    string first=arr[0];
    string ans="";

    t->lcp(first,ans);
    return ans;
}

//ITS TIME COM IS O(M*N)
//SPACE IS O(M*N)



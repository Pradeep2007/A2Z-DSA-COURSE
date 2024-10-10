class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        string temp;
        for(int i;i<n;i++){
            int p=1;
            for(int j=0;j<n;j++){
                if(i!=j && s[i]==s[j]){
                    p=0;
                    break;
                }
            }
            if(p==1){
                temp+=s[i];
            }
        }
        return temp;
    }
    
};
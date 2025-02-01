class Solution {
public:
    bool check(vector<int>base ,vector<int> newbox){
        if(newbox[0]<=base[0] && newbox[1]<=base[1] && newbox[2]<=base[2]) return true;
        else return false;
    }
    int solveSp(int n,vector<vector<int>>&a){
        vector<int>curRow(n+1,0);
        vector<int>nextRow(n+1,0);
        for(int cur=n-1;cur>=0;cur--){
            for(int prev=cur-1;prev>=-1;prev--){
                int take=0;
                if(prev==-1 || check(a[cur],a[prev])) take=a[cur][2]+nextRow[cur+1];
                
                int notTake=0+nextRow[prev+1];
                curRow[prev+1]= max(take,notTake);
            }
            nextRow=curRow;
        }
        return nextRow[0];
    }
    int maxHeight(vector<vector<int>>& cuboids) {
        //sort all dimensions for every cuboid
        for(auto &a:cuboids){
            sort(a.begin(),a.end());
        }
        //sort on the basis of width
        sort(cuboids.begin(),cuboids.end());

        return solveSp(cuboids.size(),cuboids);
    }
};
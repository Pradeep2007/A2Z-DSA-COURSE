class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(),a.end());
        int i=0;
        int j=m-1;
        int mini=INT_MAX;
        while(j<a.size()){
            int dif=a[j]-a[i];
            mini=min(mini,dif);
            i++;
            j++;
        }
        return mini;
    }
};
int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    int maxFreq=0;
    int maxAns=0;
    unordered_map<int,int>m;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
        maxFreq=max(maxFreq,m[arr[i]]);
    }
    for(int i=0;i<arr.size();i++){
        if(maxFreq==m[arr[i]]){
            maxAns=arr[i];
            break;
        }
    }
    return maxAns;
}
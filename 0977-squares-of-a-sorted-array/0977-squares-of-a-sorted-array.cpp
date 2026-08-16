class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
    int n=v.size();
    vector<int>ans(n);
    int high=n-1;
    int low=0;
    int i=n-1;
    for(int i=0;i<n;i++){
        v[i]*=v[i];
    }
    while(i>=0){
        if(v[low]>v[high]){
            ans[i]=v[low];
            low++;
        }
        else{
            ans[i]=v[high];
            high--;
        }
        i--;
    }
    return ans;
    }
};
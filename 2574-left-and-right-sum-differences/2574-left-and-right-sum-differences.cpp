class Solution {
public:
   vector<int> leftRightDifference(vector<int>& v) {
        int n=v.size();

        
        vector<int> left(n,0);
        vector<int> right(n,0);
        vector<int> ans(n,0);
        for(int i=1;i<n;i++){
            left[i]+=v[i-1]+left[i-1];
        }
        for(int i=n-2;i>=0;i--){
            right[i]=v[i+1]+right[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=abs(left[i]-right[i]);
        }

        return ans;
    }
};
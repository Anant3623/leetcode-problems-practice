class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& v, int k) {
        int n=v.size();
        if(k<=1) return 0;
        int high=0;
        int low=0;
        int product=1;
        int ans=0;
        while(high<n){
            product*=v[high];

            while(product>=k){
                product/=v[low];
                low++;
            }
            ans+=high-low+1;
            high++;
        }
        return ans;
    }
};
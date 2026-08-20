class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>mp;
        int ans=0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                sum+=-1;
            }
            else{
                sum+=1;
            }

            if(sum==0){
                ans=max(ans,i+1);
            }
           
            if(mp.contains(sum)){
                ans=max(ans,(i-mp[sum]));
            }
            else{
            mp[sum]=i;
            }
            
            
        }
        return ans;
    }
};
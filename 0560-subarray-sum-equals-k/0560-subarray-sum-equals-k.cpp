class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
        int n=v.size();
        int sum=0;
        int result=0;
        unordered_map<int,int>mp;
        mp[0]=1;
       
        
       
       
        
        for(int i=0;i<n;i++){
          sum+=v[i];
         
          result+=mp[sum-k];
          mp[sum]++;
          
        }
        return result;
      
        

        
    }
};
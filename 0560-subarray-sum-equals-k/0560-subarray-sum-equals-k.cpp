class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
        int n=v.size();
        int sum=0;
        int result=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int diff=0;
        int f=0;
       
       
        
        for(int i=0;i<n;i++){
          sum+=v[i];
          diff=sum-k;
          f=mp[diff];
          result+=f;
          mp[sum]++;
          
        }
        return result;
      
        

        
    }
};
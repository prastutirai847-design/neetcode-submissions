class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>found; vector<int>ans;
        for(int i =0; i<nums.size();i++){
            int x=0;
          x=  target-nums[i];
           
            if(found.count(x)){
                ans.push_back(found[x]);
                ans.push_back(i);
                
                return ans;
                
            }
             found[nums[i]]=i;


        }
        return ans;
        
    }
};

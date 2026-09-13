class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start =0, end=nums.size()-1; vector<int>ans;
        while(start<end){
            int sum=0;
            sum=nums[start]+nums[end];
            if(sum==target){
                ans.push_back(start);
            ans.push_back(end);
            return ans;
                
            }
            else if(sum>target)
            end--;
            else{
                start++;
            }
            
        }
        return ans;
        
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>count;int ans=0;int c=1;
        for(int i =0; i<nums.size();i++){
            count[nums[i]]=1;
        }
        for(int i =0;i<nums.size();i++){
             if(count.find(nums[i]-1)!=count.end())
        continue;
        int y=nums[i];
        
        while(count.find(y+1)!=count.end()){
            y++;
            c++;
        }

        }
       
        ans=max(ans,c);
        return ans;
        
    }
};

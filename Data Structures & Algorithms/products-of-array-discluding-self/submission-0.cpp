class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for (int i = 0; i < n; i++) {
    int j = 0;
    int product = 1;

    while (j < n) {
        if (j != i) {
            product *= nums[j];
        }
        j++;
    }

    ans.push_back(product);
}
return ans;

    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>c;
        for(int i=0;i<nums.size();i++){
            c[nums[i]]++;
        }
        priority_queue< pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
       for(auto x : c){
        int element= x.first;
        int freq=x.second;
        pair<int,int>curr={freq,element};
        if(pq.size()<k)
    pq.push(curr);
    continue;
    if(curr.first<pq.top().first)
    continue;
    pq.pop();
    pq.push(curr);
}
vector<int>ans;
while(!pq.empty()){
    ans.push_back(pq.top().second);
    pq.pop();
}
return ans;
    }
};

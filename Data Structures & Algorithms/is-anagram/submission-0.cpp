class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>count;
         unordered_map<int,int>find;
         for(int i =0; i<s.size();i++){
            count[s[i]]++;
         }
         for(int i =0; i<t.size();i++){
            find[t[i]]++;
         }
if(find==count)
return true;
else 
return false;
        
    }
};

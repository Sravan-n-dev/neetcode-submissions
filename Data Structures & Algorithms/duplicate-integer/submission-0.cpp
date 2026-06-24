class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> freq;
        for(auto& x: nums) {
            freq[x]++;
        }
        for(auto& f: freq){
            if(f.second>1){
                return true;
            }
        }
        return false;
    }
};
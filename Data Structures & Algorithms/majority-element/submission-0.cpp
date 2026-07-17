class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> freq;
        for(int n: nums) {
            freq[n]++;
        }
        int mx=INT_MIN;
        int ans{};
        for(auto &f: freq){
            if(f.second>mx){
                mx=f.second;
                ans=f.first;
            }
        }
    return ans;
        
    }
};
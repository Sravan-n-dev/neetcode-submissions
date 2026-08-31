class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int x = 0;
        for(auto& u: nums){
            x ^= u;
        }
        return x;

    }
};

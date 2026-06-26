class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> el;
        int n = nums.size();
        if(n == 0) return 0;

        set<int> s(nums.begin(),nums.end());
        for(int i = 0; i < n; i++) {
            if(s.find(nums[i] - 1) != s.end()){
                continue;
            }else{
                el.push_back(nums[i]);
            }
        }
       
        int mx = 1;

        for(auto & e: el) {
            int cnt = 1;
            while(true) {
                
                if(s.find(e+1) != s.end()){
                    cnt++;
                    e++;
                    mx = max(cnt, mx);
                }else {
                    break;
                }
            }
        }

        return mx;

        
    }
};

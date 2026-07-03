class Solution {
public:
    int maxArea(vector<int>& heights) {

        int n = heights.size();
        int l = 0; 
        int r = n - 1;
        int mx = INT_MIN;
        while(l < r) {
            if(heights[l] > heights[r]){
                 mx = max(mx, min(heights[l],heights[r])*(r - l));
                r--;
            }else{
                 mx = max(mx, min(heights[l],heights[r])*(r - l));
                 l++;
            }
           
        }

        return mx;

        
    }
};

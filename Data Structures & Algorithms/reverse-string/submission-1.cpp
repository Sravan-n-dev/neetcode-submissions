class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int left = 0; 
        int right = n - 1;
        while(left < right) {
            char t = s[left];
            s[left] = s[right];
            s[right] = t;
            left++;
            right--;
        } 

        

        
    }
};
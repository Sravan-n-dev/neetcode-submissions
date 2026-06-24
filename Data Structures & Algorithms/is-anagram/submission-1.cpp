class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> sc,tc;
        for(auto& x: s){
            sc[x]++;
        }
        for(auto& y: t) {
            tc[y]++;
        }
         
        for(auto& x: s) {
            if(sc[x]!=tc[x]) {
                return false;
            }
        }
        for(auto& x: t) {
            if(sc[x]!=tc[x]){
                return false;
            }
        }
        return true;
        
    }
};

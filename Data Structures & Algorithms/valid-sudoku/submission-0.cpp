class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // 3 cases brute force 
        // first case which is like check every colomn
        
        bool f = false;
        for(int i = 0; i < 9; i++) {
            vector<int> fc;
            for(int j = 0; j < 9; j++) {
                if(board[i][j]=='.'){
                    continue;
                }else{
                    fc.push_back(board[i][j]);
                }
            }
            set<int> s(fc.begin(),fc.end());
            if(s.size() == fc.size()) {
                f = true;
            }else{
               return false;
            }

        }
       



        // two case

        bool f2 = false;
        for(int i = 0; i < 9; i++) {
            vector<int> sc;
            for(int j = 0; j < 9; j++) {
                if(board[j][i]=='.'){
                    continue;
                }else{
                    sc.push_back(board[j][i]);
                }
            }
            set<int> s(sc.begin(),sc.end());
            if(s.size() == sc.size()) {
                f2 = true;
            }else{
               return false;
            }

        }
       


        // third case
        bool f3 = false;
        vector<int> dx = {0, 1, 2};
        vector<int> dy = {0, 1, 2};
        for(int i = 0; i < 9; i += 3) {
            
            for(int j = 0; j < 9; j += 3) {
                vector<int> tc;
                for(auto& x: dx) {
                    for(auto& y : dy) {
                        if(board[i + x][j + y] != '.'){
                            tc.push_back(board[i + x][j + y]);
                        }
                    }
                }
                set<int> s(tc.begin(),tc.end());
                if(s.size() == tc.size()) {
                    f3 = true;
                }else{
                    return false;
                }
            }
        }

        return true;
    }
};

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> final ;
        int r = matrix.size();
        int c = matrix[0].size();
        int sr = 0 ;
        int lr = r - 1 ;
        int sc = 0 ;
        int lc = c - 1 ;
        while (lr >= sr && lc >= sc) {
            for (int i = sc ; i <= lc ; i++){
                final.push_back(matrix[sr][i]);
            }
            for (int i = sr+1 ; i <= lr ; i++) {
                final.push_back(matrix[i][lc]);
            }
            for (int i = lc-1 ; i >= sc ; i--) {
                if (sr == lr){
                    break;
                }
                final.push_back(matrix[lr][i]);
            }
            for (int i = lr-1  ; i >= sr+1 ; i--) {
                if(sc == lc){
                    break;
                }
                final.push_back(matrix[i][sc]);
            }
            sc++;
            sr++;
            lc--;
            lr--;
        }
        return final;
    }
}; 
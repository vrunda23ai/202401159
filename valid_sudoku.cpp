class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_map<char,int>m1,m2;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    m1[board[i][j]]++;
                    
                }
                if(m1[board[i][j]]>1 && board[i][j]!='.' )
                        return false;
                
            }
            
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    m2[board[j][i]]++;
                    
                }
                if(m2[board[j][i]]>1 && board[j][i]!='.')
                        return false;
                
            }  
        }
        for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    unordered_map<char ,int>m;
                    for(int p=0;p<3;p++){
                        for(int q=0;q<3;q++){
                            if(board[i*3 +p][j*3+q]!='.'){
                                m[board[i*3 +p][j*3+q]]++;
                                if(m[board[i*3 +p][j*3 +q]]>1){
                                    return false;
                                }
                            }

                        }
                    }
                }
            }
        return true;
    }
};

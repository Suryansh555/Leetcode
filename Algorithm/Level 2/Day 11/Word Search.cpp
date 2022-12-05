#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool helper(vector<vector<char>>& board, string &word, int k, int i, int j) {
        if (k == word.length()) return true;
        if (i<0 || i>=board.size()) return false;
        if (j<0 || j>=board[i].size()) return false;
        
        
        if (word[k] == board[i][j]) {
            board[i][j] = ' ';
            if (helper(board, word, k+1, i+1, j)) return true;
            if (helper(board, word, k+1, i-1, j)) return true;
            if (helper(board, word, k+1, i, j+1)) return true;
            if (helper(board, word, k+1, i, j-1)) return true;
            board[i][j] = word[k];
        }
        
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i=0; i<board.size(); ++i)
            for (int j=0; j<board[i].size(); ++j) {
                if (helper(board, word, 0, i, j)) {
                    return true;
                }
            }
        return false;
    }
};
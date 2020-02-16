// https://leetcode-cn.com/problems/ju-zhen-zhong-de-lu-jing-lcof/
class Solution {
public:
    bool help(vector<vector<char>>& board, string word, vector<vector<int>>& visited, int x, int y){
        if(word.size() == 0) return true;
        visited[x][y] = 1;
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};
        for(int z=0; z<4; z++){
            int nx = x + dx[z], ny = y + dy[z];
            if(nx < 0 || ny < 0 || nx >= board.size() || ny >= board[0].size()) continue;
            if(visited[nx][ny] == 0 && board[nx][ny] == word[0]){
                if(help(board, word.substr(1), visited, nx, ny))
                    return true;
            }
        }
        visited[x][y] = 0;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        if(board.empty()) return false;
        int n = board.size(), m = board[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j] != word[0]) continue;
                vector<vector<int>> visited(n, vector<int>(m));
                if(help(board, word.substr(1), visited, i, j)) 
                    return true;
            }
        }
        return false;
    }
};
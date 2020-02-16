// https://leetcode-cn.com/problems/ji-qi-ren-de-yun-dong-fan-wei-lcof/
class Solution {
public:
    int count;
    vector<vector<bool>> visited;
    int check(int x, int y, int k){
        int cur = 0;
        while(x){
            cur += x % 10;
            x /= 10;
        }
        while(y){
            cur += y % 10;
            y /= 10;
        }
        return cur <= k;
    }
    void dfs(int i, int j, int m, int n, int k){
        if(i < 0 || j < 0 || i >= m || j>= n || visited[i][j] == true) return;
        visited[i][j] = true;
        if(!check(i, j, k)) return;
        count++;
        dfs(i + 1,j,m,n,k);
        dfs(i - 1,j,m,n,k);
        dfs(i,j - 1,m,n,k);
        dfs(i,j + 1,m,n,k);
    }
    int movingCount(int m, int n, int k) {
        if(m <= 0 || n <= 0 || k < 0) return 0;
        visited.resize(m);
        for(int i=0; i<m; i++) visited[i].resize(n);
        dfs(0,0,m,n,k);
        return count;
    }
};
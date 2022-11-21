class Solution {
private:
    void eraseIsLand(vector<vector<char>>& grid, int a, int b){
        int m = grid.size(), n = grid[0].size();
        if(a < 0 || a == m || b < 0 || b == n || grid[a][b] == '0'){
            return;
        }
        grid[a][b] = '0';
        eraseIsLand(grid, a - 1, b);
        eraseIsLand(grid, a + 1, b);
        eraseIsLand(grid, a, b - 1);
        eraseIsLand(grid, a, b + 1);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = m ? grid[0].size() : 0, island = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '1'){
                    island++;
                    eraseIsLand(grid,i , j);
                }
            }
        }
        return island;
    }
};
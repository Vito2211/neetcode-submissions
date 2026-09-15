class Solution {
public:
    void dfs(vector<vector<char>>& grid, int x, int y) {
        if( x < 0 || 
            x >= grid.size() ||
            y < 0 ||
            y >= grid[0].size()
        ) {
            return;
        }
        if(grid[x][y] == '0') {
            return;
        }
        
        grid[x][y] = '0';
        dfs(grid, x + 1, y);
        dfs(grid, x - 1, y);
        dfs(grid, x, y + 1);
        dfs(grid, x, y - 1);   
    }

    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        for(int y = 0; y < grid[0].size(); y++) {
            for(int x = 0; x < grid.size(); x++) {
                if(grid[x][y] == '1') {
                    islands++;
                    dfs(grid, x, y);
                }
            }
        }
        return islands;
    }
};

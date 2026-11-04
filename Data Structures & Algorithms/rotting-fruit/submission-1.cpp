class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<pair<int,int>,int>> qu;
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2){
                    qu.push({{i,j},0});
                    visited[i][j] = 2;
                }
            }
        }

        int tm = 0; //max time
        vector<int> dr = {-1,0,1,0};
        vector<int> dc = {0,-1,0,1};
        while(!qu.empty()){
            int r = qu.front().first.first;
            int c = qu.front().first.second;
            int t = qu.front().second;
            qu.pop();
            tm = max(t,tm);
            for(int i=0;i<4;i++){
                int nr = r + dr[i];
                int nc = c + dc[i];
                if( (nr >= 0 && nr < n) && (nc >= 0 && nc < m) && grid[nr][nc] == 1){
                    //valid 
                    if(visited[nr][nc] != 2){
                        qu.push({{nr,nc},t+1});
                        visited[nr][nc] = 2;
                    }
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1 && visited[i][j] != 2) return -1;
            }
        }
        return tm;
    }
};

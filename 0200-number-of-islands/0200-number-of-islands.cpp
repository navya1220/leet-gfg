class DisjointSet {
    vector<int> parent, rank;

public:
    DisjointSet(int size) {
        parent.resize(size);
        rank.resize(size, 0);
        for (int i = 0; i < size; i++) {
            parent[i] = i; 
        }
    }

    int find(int node) {
        if (parent[node] != node) {
            parent[node] = find(parent[node]); 
        }
        return parent[node];
    }

    void union_size(int u, int v) {
        int root_u = find(u);
        int root_v = find(v);

        if (root_u != root_v) {
            if (rank[root_u] > rank[root_v]) {
                parent[root_v] = root_u;
            } else if (rank[root_u] < rank[root_v]) {
                parent[root_u] = root_v;
            } else {
                parent[root_v] = root_u;
                rank[root_u]++;
            }
        }
    }
};
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        DisjointSet dis_set(m*n);
        int count = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == '1') {
                    count++;
                    int node = (n*i) + j;
                    // top 
                    if(i > 0 && grid[i-1][j] == '1') {
                        int adj_node = (n*(i-1)) + j;
                        if(dis_set.find(node) != dis_set.find(adj_node)) {
                            count--;
                            dis_set.union_size(node, adj_node);
                        }
                    }
                    // down
                    if(i + 1 < m && grid[i+1][j] == '1') {
                        int adj_node = (n*(i+1)) + j;
                        if(dis_set.find(node) != dis_set.find(adj_node)) {
                            count--;
                            dis_set.union_size(node, adj_node);
                        }
                    }
                    // left
                    if(j > 0 && grid[i][j-1] == '1') {
                        int adj_node = (n*i) + (j-1);
                        if(dis_set.find(node) != dis_set.find(adj_node)) {
                            count--;
                            dis_set.union_size(node, adj_node);
                        }
                    }
                    // right 
                    if(j + 1 < n && grid[i][j+1] == '1') {
                        int adj_node = (n*i) + (j+1);
                        if(dis_set.find(node) != dis_set.find(adj_node)) {
                            count--;
                            dis_set.union_size(node, adj_node);
                        }
                    }
                }
            }
        }
        return count;
    }
};
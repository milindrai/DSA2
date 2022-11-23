//[Note: Dont try to print cycle because there is algo for printing cycle on cp alogithm website but there is no question ever asked on printing cycle]
bool checkCycle(int node, vector < int > adj[], int vis[],int p) {
      vis[node] = 1;
      
      for (auto it: adj[node]) {
        // For undirected graph always a checkpoint in any algo :  if(it==p)continue; 
        if (vis[it]==0) {
          if (checkCycle(it, adj, vis,node)) return true;
        } else if (vis[it]==1) {    
          return true;
        }
      }
      vis[node]=2;   //For directed. Since in undirected after running one dfs nodes which are visited cant come again in another dfs but in directed in another same nodes may come.
                  // So to avoid nodes which are already visited in previous dfs in directed, we use vis[node]=2;
      topo.pb(node);  // If no cycle found print topo in reverse order else no topology is possible.
      return false;  // Used when dfs is running more than 1 times like in a for loop for(){dfs} in the below function
}

bool isCycle(int N, vector<int> adj[]) {
      int vis[N];
      memset(vis, 0, sizeof vis);

      for (int i = 0; i < N; i++) {
        if (vis[i]==0) {
          if (checkCycle(i, adj, vis,-1)) {
            return true;
          }
        }
      }
      return false;
}


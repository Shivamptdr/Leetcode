class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {

        vector<vector<int>> adj(n);

        for (auto &i : invocations) {
            adj[i[0]].push_back(i[1]);
        }

        vector<int> vis(n, false);
        queue<int> q;
        q.push(k);
        vis[k] = true;

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (int v : adj[u]) {
                if (!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }

        bool f = false;

        for (auto &e : invocations) {
            if (!vis[e[0]] && vis[e[1]]) {
                f = true;
                break;
            }
        }

        vector<int> ans;

        if (f) {
            for (int i = 0; i < n; i++)
                ans.push_back(i);
        } else {
            for (int i = 0; i < n; i++) {
                if (!vis[i])
                    ans.push_back(i);
            }
        }

        return ans;
    }
};
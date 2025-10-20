class Solution {
public:
    double bfs(unordered_map<string, vector<pair<string, double>>>& graph,
               string start, string end) {
        unordered_set<string> m;
        queue<pair<string, double>> q;
        q.push({start, 1.00});
        m.insert(start);
        while (!q.empty()) {
            int sz = q.size();
            for (int i = 0; i < sz; i++) {

                auto [node, cost] = q.front();
                q.pop();
                if (!graph.count(node)) continue;
                if (node == end)
                    return cost;
                for (auto a : graph[node]) {
                    if (!m.count(a.first)) {
                        q.push({a.first, cost * a.second});
                        m.insert(node);
                        cout<<cost*a.second<<endl;
                    }
                }
            }
        }
           return -1.0;
    }

    vector<double> calcEquation(vector<vector<string>>& equations,
                                vector<double>& values,
                                vector<vector<string>>& queries) {
        unordered_map<string, vector<pair<string, double>>> graph;

        vector<double> ans;
        set<string> s;

        int vpos = 0;

        for (vector<string> v : equations) {
            double w = values[vpos];
            string u = v[0];
            string x = v[1];
            s.insert(x);
            s.insert(u);
            graph[u].emplace_back(x, w);
            graph[x].emplace_back(u, 1 / w);
            vpos++;
        }

        for (vector<string> v : queries) {
            string start = v[0];
            string end = v[1];
            if (s.count(start) == 1 && s.count(end) == 1) {
                ans.push_back(bfs(graph, start, end));

            } else {
                ans.push_back(-1.00);
            }
        }

        return ans;
    }
};
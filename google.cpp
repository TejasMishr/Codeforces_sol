bool broadcast_shutdown_DFS(vector<pair<int, int>>& routers, pair<int, int> a, pair<int, int> b) {
    int n = routers.size();
    int A = -1, B = -1;
    
    // Create a graph representation using adjacency lists
    unordered_map<int, vector<int>> graph;
    
    // Build the graph by connecting nodes (routers) within a certain distance
    for (int i = 0; i < n; ++i) {
        int x1 = routers[i].first;
        int y1 = routers[i].second;

        if (x1 == a.first && y1 == a.second) A = i;
        if (x1 == b.first && y1 == b.second) B = i;

        for (int j = i + 1; j < n; ++j) {
            int x2 = routers[j].first;
            int y2 = routers[j].second;

            // If the distance between routers is within the wireless range
            if (sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) <= 10.0) {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }

    // If either router A or B is not found, return false
    if (A < 0 || B < 0) return false;

    // DFS implementation using a stack
    stack<int> stack;
    unordered_set<int> visited;

    stack.push(A);
    visited.insert(A);

    while (!stack.empty()) {
        int r = stack.top();
        stack.pop();

        // If we reach router B, return true
        if (r == B) return true;

        // Explore the neighbors
        for (int neigh : graph[r]) {
            if (visited.find(neigh) == visited.end()) {
                visited.insert(neigh);
                stack.push(neigh);
            }
        }
    }

    // If we exhaust the search and don't find B, return false
    return false;
}






double distance(pair<double, double> cordinate1, pair<double, double> cordinate2) {
    return sqrt(pow(cordinate1.first - cordinate2.first, 2) + pow(cordinate1.second - cordinate2.second, 2));
}








bool canMsgReach(map<string, pair<double, double>>& routerToCordinates, string sourceRouter, string destRouter, int wirelessRange) {
    int n = routerToCordinates.size();
    unordered_map<string, vector<string>> graph;

    // Build the graph by connecting nodes (routers) within a certain distance
    for (auto it1 = routerToCordinates.begin(); it1 != routerToCordinates.end(); ++it1) {
        for (auto it2 = next(it1); it2 != routerToCordinates.end(); ++it2) {
            if (distance(it1->second, it2->second) <= wirelessRange) {
                graph[it1->first].push_back(it2->first);
                graph[it2->first].push_back(it1->first);
            }
        }
    }

    // DFS implementation using a stack
    stack<string> stack;
    unordered_set<string> visited;

    stack.push(sourceRouter);
    visited.insert(sourceRouter);

    while (!stack.empty()) {
        string r = stack.top();
        stack.pop();

        // If we reach the destination router, return true
        if (r == destRouter) return true;

        // Explore the neighbors
        for (string neigh : graph[r]) {
            if (visited.find(neigh) == visited.end()) {
                visited.insert(neigh);
                stack.push(neigh);
            }
        }
    }

    // If we exhaust the search and don't find the destination router, return false
    return false;
}
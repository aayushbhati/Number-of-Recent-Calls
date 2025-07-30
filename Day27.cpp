class RecentCounter {
public:
queue<int>q;
    RecentCounter() { 
    }
    int ping(int t) {
        q.push(t);
        int n1=t-3000;
        int n2=t;
        while(!q.empty() && q.front()<n1)q.pop();
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

// LeetCode 225 — Implement Stack using Queues
// One queue. On every push, rotate the queue so
// the new element ends up at the front (LIFO order).
// push O(n) · pop/top/empty O(1)

#include <queue>
using namespace std;

class MyStack {
    queue<int> q;
public:
    void push(int x) {
        q.push(x);
        for (int i = 0; i < (int)q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }

    int top()        { return q.front(); }
    bool empty()     { return q.empty(); }
};
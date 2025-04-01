#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <array>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
using namespace std;

// 1. SEQUENCE CONTAINERS
void sequence_containers() {
    cout << "\n--- Sequence Containers ---\n";
    
    // Vector
    vector<int> vec = {1, 2, 3};
    vec.push_back(4);
    vec.pop_back();
    cout << "Vector: "; for (int v : vec) cout << v << " "; cout << endl;
    
    // Deque
    deque<int> dq = {1, 2, 3};
    dq.push_front(0);
    dq.push_back(4);
    dq.pop_front();
    dq.pop_back();
    cout << "Deque: "; for (int d : dq) cout << d << " "; cout << endl;

    // List
    list<int> lst = {1, 2, 3};
    lst.push_front(0);
    lst.push_back(4);
    lst.pop_front();
    lst.pop_back();
    cout << "List: "; for (int l : lst) cout << l << " "; cout << endl;

    // Array
    array<int, 3> arr = {10, 20, 30};
    cout << "Array: "; for (int a : arr) cout << a << " "; cout << endl;
}

// 2. ASSOCIATIVE CONTAINERS
void associative_containers() {
    cout << "\n--- Associative Containers ---\n";
    
    // Set
    set<int> st = {5, 2, 8, 5};
    st.insert(10);
    st.erase(2);
    cout << "Set: "; for (int s : st) cout << s << " "; cout << endl;
    
    // Map
    map<int, string> mp = {{1, "One"}, {2, "Two"}};
    mp[3] = "Three";
    mp.erase(2);
    cout << "Map: "; for (auto &m : mp) cout << "(" << m.first << ", " << m.second << ") "; cout << endl;
}

// 3. UNORDERED ASSOCIATIVE CONTAINERS
void unordered_associative_containers() {
    cout << "\n--- Unordered Associative Containers ---\n";
    
    // Unordered Set
    unordered_set<int> ust = {5, 2, 8, 5};
    ust.insert(10);
    ust.erase(2);
    cout << "Unordered Set: "; for (int us : ust) cout << us << " "; cout << endl;
    
    // Unordered Map
    unordered_map<int, string> ump = {{1, "One"}, {2, "Two"}};
    ump[3] = "Three";
    ump.erase(2);
    cout << "Unordered Map: "; for (auto &um : ump) cout << "(" << um.first << ", " << um.second << ") "; cout << endl;
}

// 4. CONTAINER ADAPTERS
void container_adapters() {
    cout << "\n--- Container Adapters ---\n";
    
    // Stack
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.pop();
    cout << "Stack top: " << stk.top() << endl;
    
    // Queue
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    que.pop();
    cout << "Queue front: " << que.front() << endl;
    
    // Priority Queue
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.pop();
    cout << "Priority Queue top: " << pq.top() << endl;
}

int main() {
    sequence_containers();
    associative_containers();
    unordered_associative_containers();
    container_adapters();
    return 0;
}

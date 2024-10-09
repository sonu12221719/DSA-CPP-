C++ provides a variety of built-in data structures in the form of classes and templates from its Standard Template Library (STL). Here are some of the most commonly used built-in data structures:

### 1. **Array**
   - **Description**: A fixed-size collection of elements of the same type.
   - **Syntax**:
     ```cpp
     int arr[5] = {1, 2, 3, 4, 5};
     ```
   - **Limitations**: Size is fixed and must be known at compile time.

### 2. **Vector (Dynamic Array)**
   - **Description**: A dynamic array that can grow or shrink in size as needed.
   - **Header**: `<vector>`
   - **Syntax**:
     ```cpp
     #include <vector>
     std::vector<int> v = {1, 2, 3, 4};
     v.push_back(5); // Adds element to the end
     ```
   - **Key Methods**: `push_back()`, `pop_back()`, `size()`, `clear()`, `at()`

### 3. **Deque (Double-ended Queue)**
   - **Description**: A double-ended queue that allows insertion and deletion from both ends.
   - **Header**: `<deque>`
   - **Syntax**:
     ```cpp
     #include <deque>
     std::deque<int> dq = {1, 2, 3, 4};
     dq.push_front(0);  // Insert at the front
     dq.push_back(5);   // Insert at the back
     ```
   - **Key Methods**: `push_front()`, `push_back()`, `pop_front()`, `pop_back()`, `size()`

### 4. **List (Doubly Linked List)**
   - **Description**: A doubly linked list that allows efficient insertion and deletion at both ends.
   - **Header**: `<list>`
   - **Syntax**:
     ```cpp
     #include <list>
     std::list<int> l = {1, 2, 3, 4};
     l.push_back(5);  // Insert at the end
     l.push_front(0); // Insert at the front
     ```
   - **Key Methods**: `push_back()`, `push_front()`, `pop_back()`, `pop_front()`, `size()`

### 5. **Stack**
   - **Description**: A LIFO (Last In, First Out) data structure.
   - **Header**: `<stack>`
   - **Syntax**:
     ```cpp
     #include <stack>
     std::stack<int> s;
     s.push(10);  // Push an element
     s.pop();     // Remove the top element
     int top = s.top(); // Access the top element
     ```
   - **Key Methods**: `push()`, `pop()`, `top()`, `empty()`

### 6. **Queue**
   - **Description**: A FIFO (First In, First Out) data structure.
   - **Header**: `<queue>`
   - **Syntax**:
     ```cpp
     #include <queue>
     std::queue<int> q;
     q.push(10);  // Add an element to the queue
     q.pop();     // Remove the front element
     int front = q.front(); // Access the front element
     ```
   - **Key Methods**: `push()`, `pop()`, `front()`, `back()`, `empty()`

### 7. **Priority Queue**
   - **Description**: A queue where elements are ordered by priority. By default, it's a max-heap.
   - **Header**: `<queue>`
   - **Syntax**:
     ```cpp
     #include <queue>
     std::priority_queue<int> pq;
     pq.push(10);  // Insert an element
     pq.push(5);   // Insert another element
     int top = pq.top(); // Access the highest priority element (largest by default)
     pq.pop();     // Remove the top element
     ```
   - **Key Methods**: `push()`, `pop()`, `top()`

### 8. **Set**
   - **Description**: A collection of unique, sorted elements (by default, in ascending order).
   - **Header**: `<set>`
   - **Syntax**:
     ```cpp
     #include <set>
     std::set<int> s = {4, 1, 3, 2};  // Elements will be sorted automatically
     s.insert(5);  // Insert element
     s.erase(3);   // Remove element
     bool exists = s.find(4) != s.end(); // Check if an element exists
     ```
   - **Key Methods**: `insert()`, `erase()`, `find()`, `size()`

### 9. **Map**
   - **Description**: A collection of key-value pairs, where keys are unique and sorted.
   - **Header**: `<map>`
   - **Syntax**:
     ```cpp
     #include <map>
     std::map<int, std::string> m;
     m[1] = "one";  // Insert key-value pair
     m[2] = "two";
     std::cout << m[1]; // Access value by key
     ```
   - **Key Methods**: `insert()`, `erase()`, `find()`, `operator[]`

### 10. **Unordered Set**
   - **Description**: Similar to `set`, but elements are not sorted and it uses a hash table for faster access.
   - **Header**: `<unordered_set>`
   - **Syntax**:
     ```cpp
     #include <unordered_set>
     std::unordered_set<int> us = {1, 2, 3};
     us.insert(4);
     us.erase(2);
     ```
   - **Key Methods**: `insert()`, `erase()`, `find()`

### 11. **Unordered Map**
   - **Description**: Similar to `map`, but key-value pairs are stored in an unordered manner (using a hash table).
   - **Header**: `<unordered_map>`
   - **Syntax**:
     ```cpp
     #include <unordered_map>
     std::unordered_map<int, std::string> um;
     um[1] = "one";  // Insert key-value pair
     um[2] = "two";
     std::cout << um[1]; // Access value by key
     ```
   - **Key Methods**: `insert()`, `erase()`, `find()`, `operator[]`

### 12. **Bitset**
   - **Description**: A compact array of bits.
   - **Header**: `<bitset>`
   - **Syntax**:
     ```cpp
     #include <bitset>
     std::bitset<8> b; // Creates a bitset of size 8
     b.set(1); // Set bit at position 1
     b.reset(1); // Reset bit at position 1
     bool isSet = b.test(1); // Test if bit at position 1 is set
     ```
   - **Key Methods**: `set()`, `reset()`, `test()`, `count()`, `size()`

### Summary

| Data Structure    | Header          | Description                                              |
|-------------------|-----------------|----------------------------------------------------------|
| **Array**         | -               | Fixed-size, static array.                                |
| **Vector**        | `<vector>`      | Dynamic array that can grow and shrink in size.          |
| **Deque**         | `<deque>`       | Double-ended queue, supports insertions/removals at both ends. |
| **List**          | `<list>`        | Doubly linked list with efficient insertions/deletions.  |
| **Stack**         | `<stack>`       | LIFO data structure.                                     |
| **Queue**         | `<queue>`       | FIFO data structure.                                     |
| **Priority Queue**| `<queue>`       | Priority-based queue (max-heap by default).              |
| **Set**           | `<set>`         | Collection of unique elements, sorted.                   |
| **Map**           | `<map>`         | Key-value pairs, sorted by key.                          |
| **Unordered Set** | `<unordered_set>`| Collection of unique elements, unordered.                |
| **Unordered Map** | `<unordered_map>`| Key-value pairs, unordered.                              |
| **Bitset**        | `<bitset>`      | Compact array of bits.                                   |

Would you like to see a more in-depth example of one of these data structures, or do you need more details about a particular one?
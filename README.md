# C++ Built-in Data Structures

## 1. Array
- **Description**: A fixed-size collection of elements of the same type.
- **Syntax**:
  ```cpp
  int arr[5] = {1, 2, 3, 4, 5};
  ```

## 2. Vector (Dynamic Array)
- **Header**: `<vector>`
- **Description**: A dynamic array that grows or shrinks in size as needed.
- **Syntax**:
  ```cpp
  #include <vector>
  std::vector<int> v = {1, 2, 3, 4};
  v.push_back(5);  // Adds element to the end
  ```

## 3. Deque (Double-ended Queue)
- **Header**: `<deque>`
- **Description**: A double-ended queue that allows insertion and deletion from both ends.
- **Syntax**:
  ```cpp
  #include <deque>
  std::deque<int> dq = {1, 2, 3, 4};
  dq.push_front(0);  // Insert at the front
  dq.push_back(5);   // Insert at the back
  ```

## 4. List (Doubly Linked List)
- **Header**: `<list>`
- **Description**: A doubly linked list that allows efficient insertion and deletion at both ends.
- **Syntax**:
  ```cpp
  #include <list>
  std::list<int> l = {1, 2, 3, 4};
  l.push_back(5);   // Insert at the end
  l.push_front(0);  // Insert at the front
  ```

## 5. Stack (LIFO)
- **Header**: `<stack>`
- **Description**: A Last In, First Out (LIFO) data structure.
- **Syntax**:
  ```cpp
  #include <stack>
  std::stack<int> s;
  s.push(10);    // Push an element
  s.pop();       // Remove the top element
  int top = s.top();  // Access the top element
  ```

## 6. Queue (FIFO)
- **Header**: `<queue>`
- **Description**: A First In, First Out (FIFO) data structure.
- **Syntax**:
  ```cpp
  #include <queue>
  std::queue<int> q;
  q.push(10);  // Add an element
  q.pop();     // Remove the front element
  int front = q.front();  // Access the front element
  ```

## 7. Priority Queue
- **Header**: `<queue>`
- **Description**: A queue where elements are ordered by priority (max-heap by default).
- **Syntax**:
  ```cpp
  #include <queue>
  std::priority_queue<int> pq;
  pq.push(10);   // Insert element
  pq.push(5);    // Insert another element
  int top = pq.top(); // Access the highest priority element
  pq.pop();      // Remove the top element
  ```

## 8. Set
- **Header**: `<set>`
- **Description**: A collection of unique, sorted elements.
- **Syntax**:
  ```cpp
  #include <set>
  std::set<int> s = {4, 1, 3, 2};  // Elements will be sorted automatically
  s.insert(5);  // Insert element
  s.erase(3);   // Remove element
  bool exists = s.find(4) != s.end(); // Check if an element exists
  ```

## 9. Map
- **Header**: `<map>`
- **Description**: A collection of key-value pairs where keys are unique and sorted.
- **Syntax**:
  ```cpp
  #include <map>
  std::map<int, std::string> m;
  m[1] = "one";  // Insert key-value pair
  m[2] = "two";
  std::cout << m[1];  // Access value by key
  ```

## 10. Unordered Set
- **Header**: `<unordered_set>`
- **Description**: Similar to `set`, but elements are unordered and stored using a hash table.
- **Syntax**:
  ```cpp
  #include <unordered_set>
  std::unordered_set<int> us = {1, 2, 3};
  us.insert(4);
  us.erase(2);
  ```

## 11. Unordered Map
- **Header**: `<unordered_map>`
- **Description**: Similar to `map`, but key-value pairs are stored unordered using a hash table.
- **Syntax**:
  ```cpp
  #include <unordered_map>
  std::unordered_map<int, std::string> um;
  um[1] = "one";  // Insert key-value pair
  um[2] = "two";
  std::cout << um[1];  // Access value by key
  ```

## 12. Bitset
- **Header**: `<bitset>`
- **Description**: A compact array of bits.
- **Syntax**:
  ```cpp
  #include <bitset>
  std::bitset<8> b;  // Create a bitset of size 8
  b.set(1);          // Set bit at position 1
  b.reset(1);        // Reset bit at position 1
  bool isSet = b.test(1);  // Test if bit at position 1 is set
  ```

## Summary of C++ Data Structures

| Data Structure    | Header              | Description                                           |
|-------------------|---------------------|-------------------------------------------------------|
| **Array**         | -                   | Fixed-size collection of elements of the same type.   |
| **Vector**        | `<vector>`          | Dynamic array that grows or shrinks as needed.        |
| **Deque**         | `<deque>`           | Double-ended queue supporting insertion/removal at both ends. |
| **List**          | `<list>`            | Doubly linked list with efficient insertions/removals.|
| **Stack**         | `<stack>`           | LIFO (Last In, First Out) data structure.             |
| **Queue**         | `<queue>`           | FIFO (First In, First Out) data structure.            |
| **Priority Queue**| `<queue>`           | Priority-based queue (max-heap by default).           |
| **Set**           | `<set>`             | Collection of unique, sorted elements.                |
| **Map**           | `<map>`             | Key-value pairs, sorted by key.                       |
| **Unordered Set** | `<unordered_set>`   | Collection of unique, unordered elements.             |
| **Unordered Map** | `<unordered_map>`   | Key-value pairs, unordered.                           |
| **Bitset**        | `<bitset>`          | Compact array of bits.                                |




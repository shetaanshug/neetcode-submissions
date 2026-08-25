class LRUCache {
    
    struct Node {
        int key;
        int value;
        Node* next;
        Node* prev;

        Node(int k, int v) {
            key = k;
            value = v;
            next = nullptr;
            prev = nullptr;
        }
    };

    unordered_map<int, Node*> mp;

    // head = MRU
    // tail = LRU
    Node* head;
    Node* tail;

    int capacity;

public:

    LRUCache(int capacity) {
        this->capacity = capacity;
        head = nullptr;
        tail = nullptr;
    }

    int get(int key) {

        // Key doesn't exist
        if (mp.find(key) == mp.end())
            return -1;

        Node* node = mp[key];

        // This key was just used,
        // so move it to MRU position.
        remove(node);
        insertFront(node);

        return node->value;
    }

    void put(int key, int value) {

        // Key already exists
        if (mp.find(key) != mp.end()) {

            Node* node = mp[key];

            // Update value
            node->value = value;

            // It was just used → MRU
            remove(node);
            insertFront(node);

            return;
        }

        // Create new node
        Node* node = new Node(key, value);

        mp[key] = node;

        // Put new node at MRU
        insertFront(node);

        // Cache exceeded capacity
        if (mp.size() > capacity) {

            // tail is LRU
            Node* lru = tail;

            mp.erase(lru->key);

            remove(lru);

            delete lru;
        }
    }

private:

    // Remove a node from wherever it currently is
    void remove(Node* node) {

        // Node has something before it
        if (node->prev != nullptr)
            node->prev->next = node->next;
        else
            head = node->next;

        // Node has something after it
        if (node->next != nullptr)
            node->next->prev = node->prev;
        else
            tail = node->prev;

        node->next = nullptr;
        node->prev = nullptr;
    }

    // Insert node at MRU/head
    void insertFront(Node* node) {

        node->next = head;
        node->prev = nullptr;

        if (head != nullptr)
            head->prev = node;
        else
            tail = node;

        head = node;
    }
};
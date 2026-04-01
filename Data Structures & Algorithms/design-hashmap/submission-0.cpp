class MyHashMap {
private:
    vector<int> map;

public:
    MyHashMap() {
        // Initialize vector of size 1,000,001 with -1 (indicates empty)
        map.resize(1000001, -1);
    }
    
    void put(int key, int value) {
        map[key] = value;  // Add or update the key
    }
    
    int get(int key) {
        return map[key];   // Returns -1 if key doesn't exist
    }
    
    void remove(int key) {
        map[key] = -1;     // Mark key as removed
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
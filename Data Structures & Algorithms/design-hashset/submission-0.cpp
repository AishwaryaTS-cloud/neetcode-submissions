class MyHashSet {
private:
    // Using a boolean vector to mark presence of keys
    vector<bool> hashSet;

public:
    MyHashSet() {
        // Initialize a vector of size 1,000,001 with false
        hashSet.resize(1000001, false);
    }
    
    void add(int key) {
        hashSet[key] = true;  // Mark key as present
    }
    
    void remove(int key) {
        hashSet[key] = false; // Mark key as absent
    }
    
    bool contains(int key) {
        return hashSet[key];  // Return true if key is present
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
unordered_map<int,int>m;
vector<int>arr;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
       if(m.count(val)) return false;
       arr.push_back(val);
       m[val] = arr.size() -1;
       return true;
    }
    
    bool remove(int val) {
        if(!m.count(val)) return false;

        // store the index of the value we want to delete from map
        int index = m[val];
        // store the last element from array
        int lastElement = arr.back();

        // we willl assign last element from array to the index we want to delete inside array
        arr[index] = lastElement;
        // also we will update the index of last element in map as well
        m[lastElement] = index;

        // Remove last element
        arr.pop_back();
        m.erase(val);

        return true;

    }
    
    int getRandom() {
        int random = rand() % arr.size();
        return arr[random];
    }

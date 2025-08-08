// solved by myself

    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int>m;
        for(int i=0;i<n;i++) {
            // exist in map
            if(m.find(arr[i]) != m.end()) {
                if(abs(m[arr[i]] - i) <= k) return true;
            }
            m[arr[i]] = i;
        }
        return false;
    }

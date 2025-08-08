vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> ans;
        unordered_map<int, int> m;
        for(int i=0;i<n;i++) {
            int first = arr[i];
            int second = target - first;
            // exist in set
            if(m.find(second) != m.end()) {
                ans.push_back(i);
                ans.push_back(m[second]);
            }
            m[first] = i;
        }
        return ans;
    }

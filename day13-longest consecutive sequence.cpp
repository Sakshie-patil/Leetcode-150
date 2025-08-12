int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        unordered_set<int>s(arr.begin(), arr.end());
         int best=0;
         // iterate on set
        for(int x : s) {
            // if x-1 not exist in set then it is the start of sequence
            if(s.find(x-1) == s.end()) {
                int length = 1;
                // until the length +1 is there in the set it is the valid sequence inc length
                while(s.find(x + length) != s.end()) {
                    ++length;
                }
                best = max(best, length);
            }
        } 
    return best;
    }

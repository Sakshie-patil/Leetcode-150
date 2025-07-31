int lengthOfLongestSubstring(string str) {
        int l=0;
        int r=0;
        int n = str.size();
        int maxLen=0;
        set<int>s;

        while(r < n) {
            char ch = str[r];
            // window shrinking
            // if already present in set then we want to add new so we must delete the old one becaise set doesnt store duplicates if we keep the previous one and add new one set will not add the new one so to maintain the order we remove the first one from set then add thr new one and then shrink the window
            while(s.find(ch) != s.end()) {
                s.erase(str[l]);
                l=l+1;
            }
            // if not present in set already simply add it and calculate the length and move r ptr ahead
            s.insert(ch);
            maxLen = max(maxLen , r-l+1);
            r=r+1;
        }
        return maxLen;
    }

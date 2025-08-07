bool isAnagram(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();

        unordered_map<char, int>m;

        if(n1 != n2) return false;

        for(char ch : s) m[ch]++;

        for(char ch : t) {
            if(m[ch] == 0) return false;
            m[ch]--;
        }
        return true;
    }

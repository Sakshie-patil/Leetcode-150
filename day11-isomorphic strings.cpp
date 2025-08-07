bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m;
        unordered_set<char>st;
        int i=0;
        int j=0;
        int n1 = s.size();
        int n2= t.size();

        if (s.length() != t.length()) return false;

        while(i < n1 && j < n2) {
            // exist in map
            if(m.find(s[i]) != m.end()) {
                if(m[s[i]] != t[j]) return false;
            } else {
                // found in set
            if(st.find(t[j]) != st.end()) {
                return false;
            }
            
            m[s[i]] = t[j];
            st.insert(t[j]);
            }
          
            i++;
            j++;
        }
        return true;
    }

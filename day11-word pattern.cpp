bool wordPattern(string s, string t) {
        // extra
         stringstream ss(t);
         string word;

        unordered_map<char, string> m;
        unordered_set<string>st;
        int i=0;
        int n1 = s.size();
        int n2= t.size();

        while(ss >> word) {
            if( i >= n1) return false;  // extra

            // exist in map
            if(m.find(s[i]) != m.end()) {
                if(m[s[i]] != word) return false;
            } else {
                // found in set
            if(st.find(word) != st.end()) {
                return false;
            }
            
            m[s[i]] = word;
            st.insert(word);
            }
          
            i++;
            
        }
        // change
        return i == s.length();;

    }

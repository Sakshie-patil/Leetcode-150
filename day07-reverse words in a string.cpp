string reverseWords(string s) {
        int n = s.size();
        int st=0;
        int end = n-1;
        string ans ="";
        // reverse whole string
        reverse(s.begin(), s.end());
        for(int i=0;i<n;i++) {
            string word ="";
            while(s[i] != ' ' && i<n) {
                word = word + s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            // for adding word into ans
            if(!word.empty()) {
                // for adding spaces
                if(!ans.empty()) {
                    ans = ans + " ";
                }
                ans = ans + word;
            }
        }
        return ans;
    }

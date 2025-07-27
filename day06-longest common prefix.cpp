string longestCommonPrefix(vector<string>& s) {
        string ans="";
        bool match = true;
        int n = s.size();

        for(int i=0;i<s[0].size() ;i++) {
            char ch = s[0][i];

            for(int j=1;j<n;j++) {
                // not match
                if(ch != s[j][i]) {
                    match = false;
                    break;
                }
            }
            if(match == false) {
                break;
            }
            else {
                ans.push_back(ch);
            }
        }
        return ans;
    }

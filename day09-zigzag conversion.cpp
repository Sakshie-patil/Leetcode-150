string convert(string s, int numRows) {
        int n = s.size();
        vector<string>ans(numRows, "");

        int i=0;
        while(i<n) {
            // top to down
            for(int idx=0;idx<numRows && i<n; idx++) {
                ans[idx] = ans[idx] + s[i];
                i++;
            }

            // middle one element zigzag
            for(int idx=numRows-2 ; idx>0 && i<n ; idx--) {
                ans[idx] = ans[idx] + s[i];
                i++;
            }
        }

        string result ="";
        for(string str : ans) {
            result += str;
        }
        return result;
    }

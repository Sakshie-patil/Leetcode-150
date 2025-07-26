int romanToInt(string s) {
        int ans=0;

        int n = s.size();
        // store values in hash map
        unordered_map<char,int>m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;


        for(int i=0;i<n;i++) {
            if(m[s[i]] < m[s[i+1]])     // if IV = V is greater than I so subtract V-I = 4
                ans = ans - m[s[i]];
            }
            else {
                ans = ans + m[s[i]];    // if VI = I is smaller than V so add  V+I = 6
            }
        }
        return ans;
    }

bool canConstruct(string ransomNote, string magazine) {
        vector<int>freq(26,-1);

        // coount freq of each char in magazine
        for(char ch : magazine) {
            freq[ch - 'a']++;
        }

        // check if ransomenote present in magazine
        for(char ch : ransomNote) {
            if(freq[ch - 'a'] == -1) return false; // not there 
            else freq[ch-'a']--;
        }
        return true;
    }

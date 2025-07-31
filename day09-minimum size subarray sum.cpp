// brute force : O(n^2) gives TLE

    int minSubArrayLen(int target, vector<int>& arr) {
        int n = arr.size();
        int idx=INT_MAX;
        for(int i=0;i<n;i++) {
            int sum=0;
            for(int j=i;j<n;j++) {
            sum += arr[j];
            if(sum <= target) {
            idx = min(idx,j-i+1);
            }
        }
    }
        if(idx == INT_MAX) return 0;
        else return idx;
    }

// optimal 
int minSubArrayLen(int target, vector<int>& arr) {
        int n =arr.size();
        int l=0,r=0;
        int sum=0;
        int minLen=INT_MAX;

        while( r<n) {
            sum = sum + arr[r];
            // shrink the window if condition is satisfied
            while(sum >= target) {
                minLen = min(minLen, r-l+1);
                sum = sum - arr[l];
                l=l+1;
            }
            r=r+1;
        }
        if(minLen == INT_MAX) return 0;
        else return minLen;
    }

// TC : O(n)
// SC : O(n)
vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(n,1);
        vector<int>prefix(n,1);
        vector<int>suffix(n,1);

        // prefix
        for(int i=1;i<n;i++) {
            prefix[i] = prefix[i-1] * arr[i-1];
        }

        // suffix
        for(int i=n-2;i>=0;i--) {
            suffix[i] = suffix[i+1] * arr[i+1];
        }

        // calculate ans
        for(int i=0;i<n;i++) {
            ans[i] = prefix[i] * suffix[i];
        }

return ans;
    }

//optimal 
//TC : O(n)
//SC : O(n)

vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(n,1);

        // prefix
        for(int i=1;i<n;i++) {
           ans[i] = ans[i-1] * arr[i-1];
        }

        int suffix = 1;
        // suffix
        for(int i=n-2;i>=0;i--) {
           suffix = suffix * arr[i+1];
           ans[i] = ans[i] * suffix;
        }

return ans;
    }

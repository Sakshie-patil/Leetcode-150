//condition : nums[i] + nums[j] + nums[k] == 0

vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        vector<vector<int>> ans;

        for(int i=0;i<n;i++) {
            int j=i+1;
            int k=n-1;

            // with if u can use continue; to skip the iteration
            if(i>0 && arr[i] == arr[i-1]) continue;

            while(k > j) {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum < 0) j++;
                else if(sum > 0) k--;
                else {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    ans.push_back(temp);
                    j++;
                    k--;

                // but with while u shouldnt use continue use should use increment operator
                while(k > j && arr[j] == arr[j-1]) j++;
                while(k > j && arr[k] == arr[k+1]) k--;
                }
            }
        }
        return ans;
    }

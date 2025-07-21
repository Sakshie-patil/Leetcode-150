int majorityElement(vector<int>& arr) {
        int count=0;
        int ans;
        int n = arr.size();
        for(int i=0;i<n;i++) {
             if(count == 0) {
            ans = arr[i];
        }

        if(ans == arr[i]) {
            count++;
        }
        else {
            count--;
        }
        }
        return ans;
    }

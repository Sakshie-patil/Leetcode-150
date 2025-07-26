int candy(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(n,1);

        //left
        for(int i=1;i<n;++i) {
            if(arr[i] > arr[i-1]) {
                ans[i] = ans[i-1]+1;
            }
        }

        // right
        for(int i=n-2;i>=0;--i) {
            if(arr[i] > arr[i+1]) {
                ans[i] = max(ans[i], ans[i+1]+1);
            }
        }

        int count=0;
        // final total count
        for(int i=0;i<n;i++) {
            count= count + ans[i];
        }
        return count;
    }

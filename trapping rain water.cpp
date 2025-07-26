int trap(vector<int>& arr) {
        int n = arr.size();
        vector<int>left(n);
        vector<int>right(n);

        left[0] = arr[0];
        // left
        for(int i=1;i<n;i++) {
            left[i] = max(left[i-1], arr[i]);
        }

        right[n-1] = arr[n-1];
        //right
        for(int i=n-2;i>=0;i--) {
            right[i] = max(right[i+1], arr[i]);
        }

        // final
        //formula : left array and right array but we need to subtract the arr[i]
        int count=0;
        for(int i=0;i<n;i++) {
            count += (min(left[i], right[i]) - arr[i]);
        }
        return count;
    }

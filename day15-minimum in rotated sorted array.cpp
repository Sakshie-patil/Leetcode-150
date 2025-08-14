int findMin(vector<int>& arr) {
        int n = arr.size();
       int low=0;
       int high = n-1;
       int mini=INT_MAX;

       while(high >= low) {
        int mid = low + (high-low)/2;
        mini = min(mini, arr[mid]);
        // left sorted
        if(arr[low] <= arr[mid]) {
            mini = min(mini, arr[low]);
            low = mid +1;
        }
        // right sorted
        else {
            mini = min(mini, arr[high]);
            high = mid-1;
        }
       }
       return mini;
    }

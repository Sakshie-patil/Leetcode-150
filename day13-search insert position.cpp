int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        int low =0;
        int ans;
        int high =  n-1;
        while(high >= low) {
            int mid = low + (high-low)/2;
            if(target == arr[mid]) {
                ans = mid;
                return ans;
            }
            else if(target < arr[mid])  {
                ans = mid;
                high = mid - 1;
            }
            // target > arr[mid]
            else {
                low = mid + 1;
                ans = mid+1;
            } 
        }
        return ans;
    }

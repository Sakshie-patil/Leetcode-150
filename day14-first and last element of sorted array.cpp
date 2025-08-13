int firstOccurence(vector<int>& arr, int n, int target) {
        int low=0;
        int high=n-1;
        int ans=-1;
        while(high >= low) {
            int mid = low + (high-low)/2;
            if( arr[mid] == target) {
                ans = mid;
                high=mid-1;
            }
            else if(arr[mid] > target) {
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }

    int lastOccurence(vector<int>& arr, int n, int target) {
         int low=0;
        int high=n-1;
        int ans=-1;
        while(high >= low) {
            int mid = low + (high-low)/2;
            if( arr[mid] == target) {
                ans = mid;
                low = mid +1;
            }
            else if(arr[mid] > target) {
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& arr, int target) {
       int n = arr.size();
       vector<int>ans;
       int first = firstOccurence(arr, n, target);
       int last = lastOccurence(arr, n, target);
        ans.push_back(first);
        ans.push_back(last);
        return ans;       
    }

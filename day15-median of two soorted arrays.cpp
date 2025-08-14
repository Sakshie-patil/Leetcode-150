vector<int> mergeArrays(vector<int>& arr1, vector<int>& arr2) {
    int m = arr1.size();
    int n = arr2.size();
    vector<int> ans;
    int i=0;
    int j=0;
    while(i < m && j < n) {
        if(arr1[i] <= arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
        }
        else {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(m > i) {
          ans.push_back(arr1[i]);
            i++;
    }

    while(n>j) {
        ans.push_back(arr2[j]);
            j++;
    }
    return ans;
 }

    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans = mergeArrays(arr1, arr2);
        int n = ans.size();
        double mid;
        // odd
        if(n%2 != 0) {
            mid = ans[n/2];
        }
        // even
        else {
            mid = (ans[n/2 - 1] + ans[n/2]) / 2.0;
        }
        return mid;
    }

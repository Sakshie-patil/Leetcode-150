int removeElement(vector<int>& arr, int val) {
        int i=0;
        int j=0;
        int n = arr.size();
        while(i<n && j<n) {
            if(arr[i] != val) {
                swap(arr[i], arr[j]);
                i++;
                j++;
            }
            else {
                i++;
            }
        }
        return (i+j)-n;
    }

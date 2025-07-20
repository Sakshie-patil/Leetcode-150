 int removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        int i=1;
        int j=0;

        while(i<n) {
            if(arr[i] != arr[j]) {
                j++;
                arr[j] = arr[i];
                i++;
            }
            else {
               i++;
            }
        }
        return j+1;
    }

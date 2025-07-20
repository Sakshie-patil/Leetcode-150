void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        int i=m-1;
        int j= n-1;
        int ptr = m+n-1;

      while(i>=0 && j>=0) {
            if(arr1[i] >= arr2[j]) {
                arr1[ptr] = arr1[i];
                ptr--;
                i--;
            }
            else {
                arr1[ptr] = arr2[j];
                ptr--;
                j--;
            }
      }

      while(j>=0) {
           arr1[ptr] = arr2[j];
           ptr--;
           j--;
      }
      
    }

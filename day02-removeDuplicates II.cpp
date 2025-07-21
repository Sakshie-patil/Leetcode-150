 int removeDuplicates(vector<int>& arr) {
        int i=0;
        int j=0;
        int n = arr.size();
        while(i<n) {
            if(j<2 || arr[i] != arr[j-2]) { // if first "OR" statement gets true then c++ does not check second
                arr[j] = arr[i];
                j++;
            }
            i++;
        }
        return j;
    }

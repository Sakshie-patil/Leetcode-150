int maxArea(vector<int>& arr) {
        int n = arr.size();
        int left=0;
        int right=n-1;
        int maxArea=0;
        while(right > left) {
            int height = min(arr[left], arr[right]);
            int width = right - left;
            int area = height * width;
            maxArea = max(area, maxArea);

            if(arr[left] < arr[right]) left++;
            else right--;
        }
        return maxArea;
    }

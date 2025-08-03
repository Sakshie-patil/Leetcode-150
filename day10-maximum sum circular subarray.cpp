// circular kdanes algorithm

int maxSubarraySumCircular(vector<int>& arr) {
        int n = arr.size();
        int currMax=0;
        int currMin=0;
        int maxSum = arr[0];
        int minSum = arr[0];
        int totalSum=0;

        for(int i=0;i<n;i++) {
            // normal kdanes algorithm
            // calculating maxsum
           currMax = max(currMax,0) + arr[i];
           maxSum = max(maxSum, currMax);

            // kdanes but with min to find minimum subarray
            // calculating minsum
            currMin = min(currMin, 0) + arr[i];
            minSum = min(minSum, currMin);

            // calculating total
            totalSum = totalSum + arr[i];
        }
        
        // if all the elements of the array is negative then total-min would be = 0 so we are straight away returning maxsum
        // edge case
        if(totalSum == minSum) {
            return maxSum;
        }
        //Circular max sum = total array sum - minimum subarray sum
        return max(maxSum, totalSum-minSum);
    }

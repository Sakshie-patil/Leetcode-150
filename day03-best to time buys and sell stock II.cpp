// when local minima buy the stock and when local maxima sell the stock
// localminima = when arr[i] is smaller than both its right and left element
// localmaxima = when arr[i] is greater than both its right and left element
 int maxProfit(vector<int>& arr) {
        int profit=0;
        int n = arr.size();
        for(int i=1;i<n;i++) {
            if(arr[i] > arr[i-1]) {
                profit = profit + (arr[i] -  arr[i-1]);
            }
        }
        return profit;
    }

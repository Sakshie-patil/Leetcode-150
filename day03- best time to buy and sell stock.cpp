maxProfitint maxProfit(vector<int>& arr) {
        int bestBuy=arr[0];
        int n = arr.size();
        int maxProfit=0;
        for(int i=1;i<n;i++) {
            if(arr[i] > bestBuy) {
                maxProfit = max(maxProfit, arr[i]-bestBuy);
            }
            if(arr[i] < bestBuy) {
                bestBuy = arr[i];
            }
        }
        return maxProfit;
    }

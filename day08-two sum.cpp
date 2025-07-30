vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        int left=0;
        int right=n-1;
        vector<int>ans;
        while(right > left) {
            if(arr[left] + arr[right] == target)  {
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
            else if(arr[left] + arr[right] > target) {
                right--;
            }
            else {
                left++;
            }
        }
        return ans;
    }

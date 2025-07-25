// we will first find the count of papers in another array but in that if value > n then we will uodate in n itself 
// then we will apply the reverse loop and find the count and when count will be equal of gretae than the index of array we will return it
// dry run it you will understand it very clear

class Solution {
public:
    int hIndex(vector<int>& arr) {
        int n = arr.size();
        vector <int> countArray(n+1, 0);
        
        for(int i=0;i<n;i++) {
            if(arr[i] > n) {
                countArray[n]++;
            }
            else {
                countArray[i]++;
            }
        }

        int count=0;
        for(int i=n;i>=0;i--) {
            count = count + countArray[i];
            if(count >= i) {
                return i;
            }
        }
        return -1;
    }
};

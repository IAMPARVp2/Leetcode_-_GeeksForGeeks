class Solution {
public:

    int binarySearch(vector<int>& arr, int s ,int e){
         int mini = INT_MAX;
        while(s<=e){
           
            int mid = s + (e - s)/2;
            if(arr[mid] >= arr[s] && arr[mid] <= arr[e]){
                mini = min(mini, arr[s]);
                break;
            }
            if(arr[mid] >= arr[s]){
                mini =min(mini, arr[s]);
                s = mid +1;
            }
            else if(arr[mid] <= arr[e]){
                mini = min(mini, arr[mid]);
                e = mid -1;
            }

        }
        return mini;
    }
    int findMin(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
        int ans = binarySearch(nums, s, e);
        return ans;
        
    }
};
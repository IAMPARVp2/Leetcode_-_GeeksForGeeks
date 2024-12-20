class Solution {
public:

    int binarySearch(vector<int>& arr){
        int s =1 ;
        int e = arr.size()-2;
        if(arr.size()==1){return 0;}
        if(arr[0]>arr[1]){return 0;}
        if(arr[arr.size()-1]>arr[arr.size()-2]){return arr.size()-1;}

        while(s<=e){
             int mid = s+(e-s)/2;
           
            if(arr[mid-1]< arr[mid] && arr[mid]> arr[mid+1]){
                return mid;
            }
            else if(arr[mid-1]< arr[mid]){
                s=mid + 1;
            }
            else if(arr[mid] > arr[mid+1]){
                e=mid - 1;
            }
        }
        return -1;
    }
    int findPeakElement(vector<int>& nums) {
        int ans = binarySearch(nums);
        return ans;
    }
};
class Solution {
public:
    int binarySearch(vector<int>& arr, int start, int end){
        while(start<=end){

        int mid = start + (end - start)/2;
        if(start == end){return arr[start];}
            if(mid % 2 == 0){
                if(arr[mid]==arr[mid+1]){
                start=mid+2;
                }
                else{end=mid;}  
            }
            else{
                if(arr[mid]==arr[mid-1]){
                start=mid+1;
                }
                else{end=mid-1;}
            }
        }
        
      

        return -1;
    }


    int singleNonDuplicate(vector<int>& nums) {
        int start =0;
        int end =nums.size()-1;
        
        int ans = binarySearch(nums, start, end);
        return ans;
        
    }
};
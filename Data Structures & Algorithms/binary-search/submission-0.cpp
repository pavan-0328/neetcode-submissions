class Solution {
private:
    int b_search(vector<int>& arr,int target){
        int low = 0;
        int high = arr.size()-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid] == target) return mid;
            else if(arr[mid] < target){
                low = mid + 1;
            }else high = mid -1;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        return b_search(nums,target);
    }
};
